__int64 __fastcall bat::vscreen::Attributes::update(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]

  result = *a2;
  switch ( *a2 )
  {
    case 0LL:
      return result;
    case 1LL:
      goto LABEL_9;
    case 2LL:
      v3 = a2[3] + a2[4];
      v7 = a2[3];
      v8 = v3;
      if ( (core::str::validations::next_code_point(&v7) & 1) == 0 || (v4 & 0x1FFFFE) != 0x28 )
        goto LABEL_9;
      result = bat::vscreen::Attributes::update_with_charset(a1, v4, v7, v8);
      break;
    case 3LL:
      v5 = a2[1];
      v6 = a2[2];
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(a2[3], a2[4], a8_0, 2LL) )
        goto LABEL_9;
      result = bat::vscreen::Attributes::update_with_hyperlink(a1, v5, v6);
      break;
    case 4LL:
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2[7], a2[8], aM_3, 1LL) )
        result = bat::vscreen::Attributes::update_with_sgr(a1, a2[3], a2[4]);
      else
LABEL_9:
        result = bat::vscreen::Attributes::update_with_unsupported(a1, a2[1], a2[2]);
      break;
  }
  return result;
}