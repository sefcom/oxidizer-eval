char *__fastcall sniffnet::gui::styles::types::style_type::StyleType::get_extension(
        _OWORD *a1,
        __int64 (__fastcall **a2)())
{
  char *result; // rax
  char *v3; // rcx

  result = (char *)*a2 - 16;
  v3 = &byte_4;
  if ( (unsigned __int64)result < 4 )
    v3 = (char *)*a2 - 16;
  switch ( (unsigned __int64)v3 )
  {
    case 0uLL:
      a1[6] = xmmword_2DFF440;
      a1[5] = xmmword_2DFF430;
      a1[4] = xmmword_2DFF420;
      a1[3] = *(_OWORD *)&qword_2DFF410;
      a1[2] = unk_2DFF400;
      a1[1] = *(_OWORD *)&qword_2DFF3F0;
      *a1 = unk_2DFF3E0;
      break;
    case 1uLL:
      a1[6] = xmmword_2DFF4B0;
      a1[5] = xmmword_2DFF4A0;
      a1[4] = xmmword_2DFF490;
      a1[3] = *(_OWORD *)&qword_2DFF480;
      a1[2] = unk_2DFF470;
      a1[1] = *(_OWORD *)&qword_2DFF460;
      *a1 = unk_2DFF450;
      break;
    case 2uLL:
      a1[6] = xmmword_2DFF520;
      a1[5] = xmmword_2DFF510;
      a1[4] = xmmword_2DFF500;
      a1[3] = *(_OWORD *)&qword_2DFF4F0;
      a1[2] = unk_2DFF4E0;
      a1[1] = *(_OWORD *)&qword_2DFF4D0;
      *a1 = unk_2DFF4C0;
      break;
    case 3uLL:
      a1[6] = xmmword_2DFF590;
      a1[5] = xmmword_2DFF580;
      a1[4] = xmmword_2DFF570;
      a1[3] = *(_OWORD *)&qword_2DFF560;
      a1[2] = unk_2DFF550;
      a1[1] = *(_OWORD *)&qword_2DFF540;
      *a1 = unk_2DFF530;
      break;
    case 4uLL:
      result = (char *)sniffnet::gui::styles::types::custom_palette::ExtraStyles::get_extension(a1, a2);
      break;
  }
  return result;
}