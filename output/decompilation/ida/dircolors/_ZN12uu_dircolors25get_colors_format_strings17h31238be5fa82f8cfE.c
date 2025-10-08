_QWORD *__fastcall uu_dircolors::get_colors_format_strings(_QWORD *a1, _BYTE *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h]
  __int64 v8; // [rsp+10h] [rbp-28h]
  _QWORD v9[4]; // [rsp+18h] [rbp-20h] BYREF

  switch ( *a2 )
  {
    case 0:
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, aLsColors, 11LL);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v9, aExportLsColors, 19LL);
      goto LABEL_5;
    case 1:
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, aSetenvLsColors, 18LL);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v9, asc_1C0C1, 1LL);
LABEL_5:
      v3 = v9[0];
      v2 = v9[1];
      v4 = v9[2];
      break;
    case 2:
      v6 = 0LL;
      v7 = 1LL;
      v8 = 0LL;
      v2 = 1LL;
      v3 = 0LL;
      v4 = 0LL;
      break;
    case 3:
      core::panicking::panic(aInternalErrorE, 40LL, &off_F5C88);
  }
  a1[2] = v8;
  *a1 = v6;
  a1[1] = v7;
  a1[3] = v3;
  a1[4] = v2;
  a1[5] = v4;
  return a1;
}