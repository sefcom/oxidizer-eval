__int64 __fastcall sniffnet::notifications::types::sound::Sound::get_text(__int64 a1, char a2, __int64 a3)
{
  const char *v4; // rsi
  __int64 v5; // rdx
  _BYTE v7[96]; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v8[120]; // [rsp+60h] [rbp-78h] BYREF

  switch ( a2 )
  {
    case 0:
      v4 = "GulpArgsmurxgrisjukanirplsnrstunmbusvrtpracfcopyxndsiqrmllrparcp\"";
      v5 = 4LL;
      goto LABEL_6;
    case 1:
      v4 = aPop;
      v5 = 3LL;
      goto LABEL_6;
    case 2:
      v4 = aSwhoosh;
      v5 = 7LL;
LABEL_6:
      iced_core::widget::text::Text<Theme,Renderer>::new(v8, v4, v5);
      iced_core::widget::text::Text<Theme,Renderer>::font(v7, v8, a3);
      break;
    case 3:
      sniffnet::utils::types::icon::Icon::to_text(v7, 15LL);
      break;
  }
  return iced_core::widget::text::Text<Theme,Renderer>::size(a1, v7, 14.3);
}