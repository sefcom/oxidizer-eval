__int64 __fastcall sniffnet::gui::styles::types::custom_palette::CustomPalette::from_palette(_OWORD *a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2

  result = sniffnet::gui::styles::types::palette::Palette::generate_palette_extension(a1);
  a1[12] = a2[5];
  a1[11] = a2[4];
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  a1[10] = a2[3];
  a1[9] = v5;
  a1[8] = v4;
  a1[7] = v3;
  return result;
}