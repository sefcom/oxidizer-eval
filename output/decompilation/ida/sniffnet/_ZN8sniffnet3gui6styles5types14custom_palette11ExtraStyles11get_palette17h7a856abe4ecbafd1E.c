unsigned __int64 __fastcall sniffnet::gui::styles::types::custom_palette::ExtraStyles::get_palette(
        _OWORD *a1,
        __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rcx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2

  result = *(_QWORD *)a2 - 6LL;
  v3 = 10LL;
  if ( result < 0xA )
    v3 = *(_QWORD *)a2 - 6LL;
  switch ( v3 )
  {
    case 0LL:
      result = std::sync::poison::once::Once::call_once(
                 &unk_2F3B558,
                 sniffnet::gui::styles::custom_themes::dracula::DRACULA_DARK_PALETTE);
      a1[5] = xmmword_2F3B548;
      a1[4] = xmmword_2F3B538;
      a1[3] = xmmword_2F3B528;
      a1[2] = xmmword_2F3B518;
      a1[1] = xmmword_2F3B508;
      *a1 = *(_OWORD *)sniffnet::gui::styles::custom_themes::dracula::DRACULA_DARK_PALETTE;
      break;
    case 1LL:
      result = std::sync::poison::once::Once::call_once(
                 &unk_2F3B638,
                 sniffnet::gui::styles::custom_themes::dracula::DRACULA_LIGHT_PALETTE);
      a1[5] = xmmword_2F3B628;
      a1[4] = xmmword_2F3B618;
      a1[3] = xmmword_2F3B608;
      a1[2] = xmmword_2F3B5F8;
      a1[1] = xmmword_2F3B5E8;
      *a1 = *(_OWORD *)sniffnet::gui::styles::custom_themes::dracula::DRACULA_LIGHT_PALETTE;
      break;
    case 2LL:
      result = std::sync::poison::once::Once::call_once(
                 &unk_2F3B718,
                 sniffnet::gui::styles::custom_themes::gruvbox::GRUVBOX_DARK_PALETTE);
      a1[5] = xmmword_2F3B708;
      a1[4] = xmmword_2F3B6F8;
      a1[3] = xmmword_2F3B6E8;
      a1[2] = xmmword_2F3B6D8;
      a1[1] = xmmword_2F3B6C8;
      *a1 = *(_OWORD *)sniffnet::gui::styles::custom_themes::gruvbox::GRUVBOX_DARK_PALETTE;
      break;
    case 3LL:
      result = std::sync::poison::once::Once::call_once(
                 &unk_2F3B7F8,
                 sniffnet::gui::styles::custom_themes::gruvbox::GRUVBOX_LIGHT_PALETTE);
      a1[5] = xmmword_2F3B7E8;
      a1[4] = xmmword_2F3B7D8;
      a1[3] = xmmword_2F3B7C8;
      a1[2] = xmmword_2F3B7B8;
      a1[1] = xmmword_2F3B7A8;
      *a1 = *(_OWORD *)sniffnet::gui::styles::custom_themes::gruvbox::GRUVBOX_LIGHT_PALETTE;
      break;
    case 4LL:
      result = std::sync::poison::once::Once::call_once(
                 &unk_2F3B8D8,
                 sniffnet::gui::styles::custom_themes::nord::NORD_DARK_PALETTE);
      a1[5] = xmmword_2F3B8C8;
      a1[4] = xmmword_2F3B8B8;
      a1[3] = xmmword_2F3B8A8;
      a1[2] = xmmword_2F3B898;
      a1[1] = xmmword_2F3B888;
      *a1 = *(_OWORD *)sniffnet::gui::styles::custom_themes::nord::NORD_DARK_PALETTE;
      break;
    case 5LL:
      result = std::sync::poison::once::Once::call_once(
                 &unk_2F3B9B8,
                 sniffnet::gui::styles::custom_themes::nord::NORD_LIGHT_PALETTE);
      a1[5] = xmmword_2F3B9A8;
      a1[4] = xmmword_2F3B998;
      a1[3] = xmmword_2F3B988;
      a1[2] = xmmword_2F3B978;
      a1[1] = xmmword_2F3B968;
      *a1 = *(_OWORD *)sniffnet::gui::styles::custom_themes::nord::NORD_LIGHT_PALETTE;
      break;
    case 6LL:
      result = std::sync::poison::once::Once::call_once(
                 &unk_2F3BB78,
                 sniffnet::gui::styles::custom_themes::solarized::SOLARIZED_DARK_PALETTE);
      a1[5] = xmmword_2F3BB68;
      a1[4] = xmmword_2F3BB58;
      a1[3] = xmmword_2F3BB48;
      a1[2] = xmmword_2F3BB38;
      a1[1] = xmmword_2F3BB28;
      *a1 = *(_OWORD *)sniffnet::gui::styles::custom_themes::solarized::SOLARIZED_DARK_PALETTE;
      break;
    case 7LL:
      result = std::sync::poison::once::Once::call_once(
                 &unk_2F3BA98,
                 sniffnet::gui::styles::custom_themes::solarized::SOLARIZED_LIGHT_PALETTE);
      a1[5] = xmmword_2F3BA88;
      a1[4] = xmmword_2F3BA78;
      a1[3] = xmmword_2F3BA68;
      a1[2] = xmmword_2F3BA58;
      a1[1] = xmmword_2F3BA48;
      *a1 = *(_OWORD *)sniffnet::gui::styles::custom_themes::solarized::SOLARIZED_LIGHT_PALETTE;
      break;
    case 8LL:
      result = std::sync::poison::once::Once::call_once(
                 &unk_2F3B398,
                 sniffnet::gui::styles::custom_themes::a11y::A11Y_DARK_PALETTE);
      a1[5] = xmmword_2F3B388;
      a1[4] = xmmword_2F3B378;
      a1[3] = xmmword_2F3B368;
      a1[2] = xmmword_2F3B358;
      a1[1] = xmmword_2F3B348;
      *a1 = *(_OWORD *)sniffnet::gui::styles::custom_themes::a11y::A11Y_DARK_PALETTE;
      break;
    case 9LL:
      result = std::sync::poison::once::Once::call_once(
                 &unk_2F3B478,
                 sniffnet::gui::styles::custom_themes::a11y::A11Y_LIGHT_PALETTE);
      a1[5] = xmmword_2F3B468;
      a1[4] = xmmword_2F3B458;
      a1[3] = xmmword_2F3B448;
      a1[2] = xmmword_2F3B438;
      a1[1] = xmmword_2F3B428;
      *a1 = *(_OWORD *)sniffnet::gui::styles::custom_themes::a11y::A11Y_LIGHT_PALETTE;
      break;
    case 10LL:
      a1[5] = *(_OWORD *)(a2 + 192);
      a1[4] = *(_OWORD *)(a2 + 176);
      v4 = *(_OWORD *)(a2 + 112);
      v5 = *(_OWORD *)(a2 + 128);
      v6 = *(_OWORD *)(a2 + 144);
      a1[3] = *(_OWORD *)(a2 + 160);
      a1[2] = v6;
      a1[1] = v5;
      *a1 = v4;
      break;
  }
  return result;
}