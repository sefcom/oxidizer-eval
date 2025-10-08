__int64 __fastcall uu_truncate::truncate(char a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // di
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rbp

  v6 = a1 ^ 1;
  v7 = *a3;
  v8 = *a4;
  if ( __OFSUB__(-*a3, 1LL) )
  {
    if ( v8 == 0x8000000000000000LL )
      core::panicking::panic(aInternalErrorE, 40LL, &off_E4118);
    v9 = a4[1];
    v10 = uu_truncate::truncate_size_only(v9, a4[2], a5, a6, v6);
    v11 = v8;
    v12 = v9;
  }
  else
  {
    v13 = a3[1];
    v14 = a3[2];
    if ( v8 == 0x8000000000000000LL )
    {
      v10 = uu_truncate::truncate_reference_file_only(a3[1], v14, a5, a6, v6);
    }
    else
    {
      v15 = a4[1];
      v10 = uu_truncate::truncate_reference_and_size(v13, v14, v15, a4[2], a5, a6, v6);
      core::ptr::drop_in_place<alloc::string::String>(v8, v15);
    }
    v11 = v7;
    v12 = v13;
  }
  core::ptr::drop_in_place<alloc::string::String>(v11, v12);
  return v10;
}