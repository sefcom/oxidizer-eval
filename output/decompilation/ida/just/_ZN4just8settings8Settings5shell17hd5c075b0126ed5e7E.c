__int64 __fastcall just::settings::Settings::shell(const char **a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  const char *v5; // r15
  __int64 v6; // r14

  v3 = a3[27];
  if ( __OFSUB__(0LL, a3[24]) )
  {
    if ( v3 == 0x8000000000000000LL )
    {
      if ( a2[15] != 0x8000000000000000LL )
      {
        v5 = (const char *)a2[19];
        v6 = a2[20];
        result = core::iter::traits::iterator::Iterator::collect(a1 + 2, a2[16], a2[16] + 48LL * a2[17]);
        goto LABEL_11;
      }
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 2, &off_430E20);
    }
    else
    {
      result = core::iter::traits::iterator::Iterator::collect(a1 + 2, a3[28], a3[28] + 24LL * a3[29]);
    }
    v6 = 2LL;
    v5 = aSh;
  }
  else
  {
    v5 = (const char *)a3[25];
    v6 = a3[26];
    if ( v3 == 0x8000000000000000LL )
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 2, &off_430E20);
    else
      result = core::iter::traits::iterator::Iterator::collect(a1 + 2, a3[28], a3[28] + 24LL * a3[29]);
  }
LABEL_11:
  *a1 = v5;
  a1[1] = (const char *)v6;
  return result;
}