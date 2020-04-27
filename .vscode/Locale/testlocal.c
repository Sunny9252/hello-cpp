//다음은 함수 setlocale()을 사용하여 임시로 로케일로 변경하는 예이다. (glibcmanual에 있는 예)

     #include <stddef.h>
     #include <locale.h>
     #include <stdlib.h>
     #include <string.h>
     
     void
     with_other_locale (char *new_locale,
                        void (*subroutine) (int),
                        int argument)
     {
       char *old_locale, *saved_locale;
     
       /* 현재 로케일명을 알아낸다. */
       old_locale = setlocale (LC_ALL, NULL);
     
       /* setlocale()의 재호출 의해 변경될 것을 대비해 로케일 이름을 미리 복사해 둔다. */
       saved_locale = strdup (old_locale);
       if (saved_locale == NULL)
         fatal ("Out of memory");
     
       /* 로케일을 변경하고 subroutine을 수행한다. */
       setlocale (LC_ALL, new_locale);
       (*subroutine) (argument);
     
       /* 원래의 로케일로 복귀한다. */
       setlocale (LC_ALL, saved_locale);
       free (saved_locale);
     }