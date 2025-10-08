unsigned __int64 __fastcall sniffnet::gui::styles::types::style_type::StyleType::get_palette(_OWORD *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)a2 - 16LL;
  v3 = 4LL;
  if ( result < 4 )
    v3 = *(_QWORD *)a2 - 16LL;
  switch ( v3 )
  {
    case 0LL:
      a1[5] = xmmword_183823C;
      a1[4] = xmmword_183822C;
      a1[3] = xmmword_183821C;
      a1[2] = xmmword_183820C;
      a1[1] = xmmword_18381FC;
      *a1 = xmmword_18381EC;
      break;
    case 1LL:
      a1[5] = xmmword_183829C;
      a1[4] = xmmword_183828C;
      a1[3] = xmmword_183827C;
      a1[2] = xmmword_183826C;
      a1[1] = xmmword_183825C;
      *a1 = xmmword_183824C;
      break;
    case 2LL:
      a1[5] = xmmword_18382FC;
      a1[4] = xmmword_18382EC;
      a1[3] = xmmword_18382DC;
      a1[2] = xmmword_18382CC;
      a1[1] = xmmword_18382BC;
      *a1 = xmmword_18382AC;
      break;
    case 3LL:
      a1[5] = xmmword_183835C;
      a1[4] = xmmword_183834C;
      a1[3] = xmmword_183833C;
      a1[2] = xmmword_183832C;
      a1[1] = xmmword_183831C;
      *a1 = xmmword_183830C;
      break;
    case 4LL:
      result = sniffnet::gui::styles::types::custom_palette::ExtraStyles::get_palette(a1, a2);
      break;
  }
  return result;
}