__int64 __fastcall uu_truncate::truncate(char a1, __int64 a2, __int128 *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // di
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int128 *v10; // rdi
  __int128 v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v6 = a1 ^ 1;
  v7 = *a4;
  if ( *(_QWORD *)a3 == 0x8000000000000000LL )
  {
    if ( v7 == 0x8000000000000000LL )
      core::panicking::panic(aInternalErrorE, 40LL, &off_116D70);
    v12 = *(_OWORD *)a4;
    v13 = a4[2];
    v8 = uu_truncate::truncate_size_only(*((__int64 *)&v12 + 1), v13, a5, a6, v6);
  }
  else
  {
    if ( v7 != 0x8000000000000000LL )
    {
      v15 = *((_QWORD *)a3 + 2);
      v14 = *a3;
      v12 = *(_OWORD *)a4;
      v13 = a4[2];
      v9 = uu_truncate::truncate_reference_and_size(
             *((__int64 *)&v14 + 1),
             v15,
             *((__int64 *)&v12 + 1),
             v13,
             a5,
             a6,
             v6);
      core::ptr::drop_in_place<alloc::string::String>(&v12);
      v10 = &v14;
      goto LABEL_8;
    }
    v12 = *a3;
    v13 = *((_QWORD *)a3 + 2);
    v8 = uu_truncate::truncate_reference_file_only(*((__int64 *)&v12 + 1), v13, a5, a6, v6);
  }
  v9 = v8;
  v10 = &v12;
LABEL_8:
  core::ptr::drop_in_place<alloc::string::String>(v10);
  return v9;
}
