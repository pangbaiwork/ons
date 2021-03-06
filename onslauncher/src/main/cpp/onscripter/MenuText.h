#ifndef __MENUTEXT_H__
#define __MENUTEXT_H__

#include "MenuText_UTF8.h"
#include "ScriptDecoder.h"

// English Menu Text
#define ENGLISH_MSG_SAVE_EXIST "`%s%s    Date %s/%s    Time %s:%s"
#define ENGLISH_MSG_SAVE_EMPTY "`%s%s    ------------------------"
#define ENGLISH_MSG_SAVE_CONFIRM "`Save in slot %s%s?"
#define ENGLISH_MSG_LOAD_CONFIRM "`Load from slot %s%s?"
#define ENGLISH_MSG_RESET_CONFIRM "`Return to Title Menu?"
#define ENGLISH_MSG_END_CONFIRM "`Quit?"
#define ENGLISH_MSG_YES "Yes"
#define ENGLISH_MSG_NO "No"
#define ENGLISH_MSG_OK "OK"
#define ENGLISH_MSG_CANCEL "Cancel"
#define ENGLISH_SAVE_MENU_NAME "<Save>"
#define ENGLISH_LOAD_MENU_NAME "<Load>"
#define ENGLISH_SAVE_ITEM_NAME "Slot"
#define ENGLISH_NUMBERS "0123456789"
#define ENGLISH_SPACE " "
#define ENGLISH_DASH "-"
#define ENGLISH_DECODER UTF8Decoder

// Japanese Menu Text
#define JAPANESE_MSG_SAVE_EXIST "%s%s　%s月%s日%s時%s分"
#define JAPANESE_MSG_SAVE_EMPTY "%s%s　−−−−−−−−−−−−"
#define JAPANESE_MSG_SAVE_CONFIRM "%s%sにセーブします。よろしいですか？"
#define JAPANESE_MSG_LOAD_CONFIRM "%s%sをロードします。よろしいですか？"
#define JAPANESE_MSG_RESET_CONFIRM "リセットします。よろしいですか？"
#define JAPANESE_MSG_END_CONFIRM "終了します。よろしいですか？"
#define JAPANESE_MSG_YES "はい"
#define JAPANESE_MSG_NO "いいえ"
#define JAPANESE_MSG_OK "ＯＫ"
#define JAPANESE_MSG_CANCEL "キャンセル"
#define JAPANESE_SAVE_MENU_NAME "＜セーブ＞"
#define JAPANESE_LOAD_MENU_NAME "＜ロード＞"
#define JAPANESE_SAVE_ITEM_NAME "しおり"
#define JAPANESE_NUMBERS "０１２３４５６７８９"
#define JAPANESE_SPACE "　"
#define JAPANESE_DASH "−"
#define JAPANESE_DECODER JapaneseDecoder

// Korean Menu Text
#define KOREAN_MSG_SAVE_EXIST "%s%s｡｡%sｿ?%sﾀﾏ%sｽﾃ%sｺﾐ"
#define KOREAN_MSG_SAVE_EMPTY "%s%s｡｡｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ"
#define KOREAN_MSG_SAVE_CONFIRM "%s%sｿ｡｡｡ﾀ?ﾀ蠏ﾋｴﾏｴﾙ｣ｮ｡｡ﾈｮｽﾇﾇﾕｴﾏｱ?｣ｿ"
#define KOREAN_MSG_LOAD_CONFIRM "%s%sﾀｻ｡｡ｺﾒｷｯｿﾃｱ?ｿ茱ｿ"
#define KOREAN_MSG_RESET_CONFIRM "ｰﾔﾀﾓﾀﾌ｡｡ﾃﾊｱ篳ｭｵﾋｴﾏｴﾙ｣ｮ｡｡ﾈｮｽﾇﾇﾕｴﾏｱ?｣ｿ"
#define KOREAN_MSG_END_CONFIRM "ﾁｾｷ睇ﾏｽﾃｰﾚｽﾀｴﾏｱ?｣ｿ"
#define KOREAN_MSG_YES "ｿｹ"
#define KOREAN_MSG_NO "ｾﾆｴﾏｿﾀ"
#define KOREAN_MSG_OK "ﾈｮﾀﾎ"
#define KOREAN_MSG_CANCEL "ﾃ?ｼﾒ"
#define KOREAN_SAVE_MENU_NAME "｡ｴｼｼﾀﾌｺ遙ｵ"
#define KOREAN_LOAD_MENU_NAME "｡ｴｷﾎｵ蝪ｵ"
#define KOREAN_SAVE_ITEM_NAME "ﾃ･ｰ･ﾇﾇ"
#define KOREAN_NUMBERS "｣ｰ｣ｱ｣ｲ｣ｳ｣ｴ｣ｵ｣ｶ｣ｷ｣ｸ｣ｹ"
#define KOREAN_SPACE "｡｡"
#define KOREAN_DASH "｣ｭ"
#define KOREAN_DECODER KoreanDecoder

// Chinese Menu Text
#define CHINESE_MSG_SAVE_EXIST "%s%s｡｡%sﾔﾂ%sﾈﾕ%sﾊｱ%sｷﾖ"
#define CHINESE_MSG_SAVE_EMPTY "%s%s｡｡｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ｣ｭ"
#define CHINESE_MSG_SAVE_CONFIRM "ｴ豢｢ｴ豬ｵ?｡｡%s%s?"
#define CHINESE_MSG_LOAD_CONFIRM "ｶﾁﾈ｡ｴ豬ｵ?｡｡%s%s?"
#define CHINESE_MSG_RESET_CONFIRM "ｷｵｻﾘｱ?ﾌ篆酖??"
#define CHINESE_MSG_END_CONFIRM "ﾍﾋｳ??"
#define CHINESE_MSG_YES "ﾊﾇ"
#define CHINESE_MSG_NO "ｷ?"
#define CHINESE_MSG_OK "ｺﾃｵﾄ"
#define CHINESE_MSG_CANCEL "ﾈ｡ﾏ?"
#define CHINESE_SAVE_MENU_NAME "<ｴ豬ｵ>"
#define CHINESE_LOAD_MENU_NAME "<ｶﾁﾈ｡>"
#define CHINESE_SAVE_ITEM_NAME "ﾎｻ"
#define CHINESE_NUMBERS "｣ｰ｣ｱ｣ｲ｣ｳ｣ｴ｣ｵ｣ｶ｣ｷ｣ｸ｣ｹ"
#define CHINESE_SPACE "｡｡"
#define CHINESE_DASH "｣ｭ"
#define CHINESE_DECODER ChineseDecoder

class MenuTextBase
{
public:
    enum Language { JAPANESE, ENGLISH, KOREAN, RUSSIAN, CHINESE };

    MenuTextBase(const Language &lang) {
        language = lang;
    }
    ~MenuTextBase() {
        if (decoder) {
            delete decoder;
            decoder = NULL;
        }
    }

    Language getLanguage() { return language; };

    virtual const char* message_save_exist() = 0;
    virtual const char* message_save_empty() = 0;
    virtual const char* message_save_confirm() = 0;
    virtual const char* message_load_confirm() = 0;
    virtual const char* message_reset_confirm() = 0;
    virtual const char* message_end_confirm() = 0;
    virtual const char* message_yes() = 0;
    virtual const char* message_no() = 0;
    virtual const char* message_ok() = 0;
    virtual const char* message_cancel() = 0;
    virtual const char* message_save_menu() = 0;
    virtual const char* message_load_menu() = 0;
    virtual const char* message_save_item() = 0;
    virtual const char* get_numbers() = 0;
    virtual const char* get_space_char() = 0;
    virtual const char* get_dash_char() = 0;

    ScriptDecoder* decoder;
protected:
    Language language;
};

// Lazy class definition
#define lazyMenuLangMake(cls, lang)                                        \
    class cls : public MenuTextBase                                       \
    {                                                                      \
    public:                                                               \
        cls():MenuTextBase(MenuTextBase::lang) {                           \
            decoder = new lang##_DECODER();                                \
        }                                                                  \
        ~cls() {}                                                          \
        const char* message_save_exist() {                                \
            static const char* save_exist = lang##_MSG_SAVE_EXIST;       \
            return save_exist;                                            \
        }                                                                  \
        const char* message_save_empty() {                                \
            static const char* save_empty = lang##_MSG_SAVE_EMPTY;       \
            return save_empty;                                            \
        }                                                                  \
        const char* message_save_confirm() {                              \
            static const char* save_confirm = lang##_MSG_SAVE_CONFIRM;   \
            return save_confirm;                                          \
        }                                                                  \
        const char* message_load_confirm() {                              \
            static const char* load_confirm = lang##_MSG_LOAD_CONFIRM;   \
            return load_confirm;                                          \
        }                                                                  \
        const char* message_reset_confirm() {                             \
            static const char* reset_confirm = lang##_MSG_RESET_CONFIRM; \
            return reset_confirm;                                         \
        }                                                                  \
        const char* message_end_confirm() {                               \
            static const char* end_confirm = lang##_MSG_END_CONFIRM;     \
            return end_confirm;                                           \
        }                                                                  \
        const char* message_yes() {                                       \
            static const char* yes = lang##_MSG_YES;                     \
            return yes;                                                   \
        }                                                                  \
        const char* message_no() {                                        \
            static const char* no = lang##_MSG_NO;                       \
            return no;                                                    \
        }                                                                  \
        const char* message_ok() {                                        \
            static const char* ok = lang##_MSG_OK;                       \
            return ok;                                                    \
        }                                                                  \
        const char* message_cancel() {                                    \
            static const char* cancel = lang##_MSG_CANCEL;               \
            return cancel;                                                \
        }                                                                  \
        const char* message_save_menu() {                                 \
            static const char* cancel = lang##_SAVE_MENU_NAME;           \
            return cancel;                                                \
        }                                                                  \
        const char* message_load_menu() {                                 \
            static const char* cancel = lang##_LOAD_MENU_NAME;           \
            return cancel;                                                \
        }                                                                  \
        const char* message_save_item() {                                 \
            static const char* cancel = lang##_SAVE_ITEM_NAME;           \
            return cancel;                                                \
        }                                                                  \
        const char* get_numbers() {                                       \
            static const char* t = lang##_NUMBERS;                       \
            return t;                                                     \
        }                                                                  \
        const char* get_space_char() {                                    \
            static const char* t = lang##_SPACE;                         \
            return t;                                                     \
        }                                                                  \
        const char* get_dash_char() {                                     \
            static const char* t = lang##_DASH;                          \
            return t;                                                     \
        }                                                                  \
    };

lazyMenuLangMake(EnglishMenu, ENGLISH)
lazyMenuLangMake(JapaneseMenu, JAPANESE)
lazyMenuLangMake(RussianMenu, RUSSIAN)
#ifdef ENABLE_KOREAN
lazyMenuLangMake(KoreanMenu, KOREAN)
#endif
#ifdef ENABLE_CHINESE
lazyMenuLangMake(ChineseMenu, CHINESE)
#endif

#endif // __MENUTEXT_H__
