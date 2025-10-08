unsigned __int64 __fastcall sniffnet::gui::styles::types::custom_palette::ExtraStyles::get_extension(
        _OWORD *a1,
        __int64 (__fastcall **a2)())
{
  __int64 (__fastcall **v2)(); // r14
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  void *v6; // rdi
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2

  v2 = a2;
  result = (unsigned __int64)*a2 - 6;
  v4 = 10LL;
  if ( result < 0xA )
    v4 = (__int64)*a2 - 6;
  switch ( v4 )
  {
    case 0LL:
      v6 = &unk_2F3B5D0;
      v2 = &sniffnet::gui::styles::custom_themes::dracula::DRACULA_DARK_PALETTE_EXTENSION;
      goto LABEL_14;
    case 1LL:
      v6 = &unk_2F3B6B0;
      v2 = &sniffnet::gui::styles::custom_themes::dracula::DRACULA_LIGHT_PALETTE_EXTENSION;
      goto LABEL_14;
    case 2LL:
      v6 = &unk_2F3B790;
      v2 = &sniffnet::gui::styles::custom_themes::gruvbox::GRUVBOX_DARK_PALETTE_EXTENSION;
      goto LABEL_14;
    case 3LL:
      v6 = &unk_2F3B870;
      v2 = &sniffnet::gui::styles::custom_themes::gruvbox::GRUVBOX_LIGHT_PALETTE_EXTENSION;
      goto LABEL_14;
    case 4LL:
      v6 = &unk_2F3B950;
      v2 = &sniffnet::gui::styles::custom_themes::nord::NORD_DARK_PALETTE_EXTENSION;
      goto LABEL_14;
    case 5LL:
      v6 = &unk_2F3BA30;
      v2 = &sniffnet::gui::styles::custom_themes::nord::NORD_LIGHT_PALETTE_EXTENSION;
      goto LABEL_14;
    case 6LL:
      v6 = &unk_2F3BBF0;
      v2 = &sniffnet::gui::styles::custom_themes::solarized::SOLARIZED_DARK_PALETTE_EXTENSION;
      goto LABEL_14;
    case 7LL:
      v6 = &unk_2F3BB10;
      v2 = &sniffnet::gui::styles::custom_themes::solarized::SOLARIZED_LIGHT_PALETTE_EXTENSION;
      goto LABEL_14;
    case 8LL:
      v6 = &unk_2F3B410;
      v2 = &sniffnet::gui::styles::custom_themes::a11y::A11Y_DARK_PALETTE_EXTENSION;
      goto LABEL_14;
    case 9LL:
      v6 = &unk_2F3B4F0;
      v2 = &sniffnet::gui::styles::custom_themes::a11y::A11Y_LIGHT_PALETTE_EXTENSION;
LABEL_14:
      result = std::sync::poison::once::Once::call_once(v6, v2);
      break;
    case 10LL:
      break;
  }
  a1[6] = *((_OWORD *)v2 + 6);
  a1[5] = *((_OWORD *)v2 + 5);
  a1[4] = *((_OWORD *)v2 + 4);
  v7 = *(_OWORD *)v2;
  v8 = *((_OWORD *)v2 + 1);
  v9 = *((_OWORD *)v2 + 2);
  a1[3] = *((_OWORD *)v2 + 3);
  a1[2] = v9;
  a1[1] = v8;
  *a1 = v7;
  return result;
}