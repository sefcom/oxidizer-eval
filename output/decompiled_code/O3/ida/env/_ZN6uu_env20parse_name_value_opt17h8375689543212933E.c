__int64 __fastcall uu_env::parse_name_value_opt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+8h] [rbp-A0h] BYREF
  __int128 v9; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+30h] [rbp-78h]
  __int128 v11; // [rsp+38h] [rbp-70h]
  __int64 v12; // [rsp+48h] [rbp-60h]
  __int128 v13; // [rsp+50h] [rbp-58h] BYREF
  __int64 v14; // [rsp+60h] [rbp-48h]
  __int128 v15; // [rsp+68h] [rbp-40h]
  __int64 v16; // [rsp+78h] [rbp-30h]

  v8[0] = 0x8000000000000000LL;
  v8[1] = a3;
  v8[2] = a4;
  uu_env::native_int_str::NativeStr::split_once(&v9, v8, &unk_17620);
  if ( (_QWORD)v9 != 0x8000000000000001LL )
  {
    v14 = v10;
    v13 = v9;
    v15 = v11;
    v16 = v12;
    alloc::vec::Vec<T,A>::push(a2 + 48, &v13);
    *(_BYTE *)(a1 + 8) = 0;
LABEL_6:
    v6 = 0LL;
    goto LABEL_7;
  }
  v6 = uu_env::parse_program_opt(a2, a3, a4);
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 8) = 1;
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 8) = &off_148840;
LABEL_7:
  *(_QWORD *)a1 = v6;
  return core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(v8);
}
