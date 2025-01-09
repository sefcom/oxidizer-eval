__int64 __fastcall uu_env::parse_name_value_opt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+8h] [rbp-A0h] BYREF
  __int128 v7; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+30h] [rbp-78h]
  __int128 v9; // [rsp+38h] [rbp-70h]
  __int64 v10; // [rsp+48h] [rbp-60h]
  __int128 v11; // [rsp+50h] [rbp-58h] BYREF
  __int64 v12; // [rsp+60h] [rbp-48h]
  __int128 v13; // [rsp+68h] [rbp-40h]
  __int64 v14; // [rsp+78h] [rbp-30h]

  v6[0] = 0x8000000000000000LL;
  v6[1] = a3;
  v6[2] = a4;
  uu_env::native_int_str::NativeStr::split_once((__int64)&v7, v6, (unsigned int *)&unk_17620);
  if ( (_QWORD)v7 != 0x8000000000000001LL )
  {
    v12 = v8;
    v11 = v7;
    v13 = v9;
    v14 = v10;
    alloc::vec::Vec<T,A>::push(a2 + 48, &v11);
    *(_BYTE *)(a1 + 8) = 0;
LABEL_6:
    v4 = 0LL;
    goto LABEL_7;
  }
  v4 = uu_env::parse_program_opt(a2);
  if ( !v4 )
  {
    *(_BYTE *)(a1 + 8) = 1;
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 8) = &off_148840;
LABEL_7:
  *(_QWORD *)a1 = v4;
  return core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(v6);
}
