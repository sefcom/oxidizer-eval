__int64 __fastcall uu_env::parse_signal_value(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int128 v16; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD *v17; // [rsp+10h] [rbp-A8h]
  __int64 v18; // [rsp+18h] [rbp-A0h]
  __int64 v19; // [rsp+20h] [rbp-98h]
  char v20[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v21; // [rsp+38h] [rbp-80h]
  __int64 v22; // [rsp+40h] [rbp-78h]
  _QWORD v23[2]; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-60h] BYREF
  char v25; // [rsp+70h] [rbp-48h]
  __int128 v26; // [rsp+78h] [rbp-40h] BYREF
  _QWORD *v27; // [rsp+88h] [rbp-30h]

  alloc::str::<impl str>::to_uppercase(v20);
  v4 = uucore::features::signals::signal_by_name_or_value(v21, v22);
  v6 = v5;
  v24[0] = 0LL;
  v24[1] = a2;
  v24[2] = a3;
  v25 = 1;
  v23[0] = v24;
  v23[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v16 = &unk_1488B0;
  *((_QWORD *)&v16 + 1) = 2LL;
  v19 = 0LL;
  v17 = v23;
  v18 = 1LL;
  core::option::Option<T>::map_or_else(&v26, &v16, v5, v7, v8, v9);
  LODWORD(v18) = 125;
  v16 = v26;
  v17 = v27;
  v14 = alloc::boxed::Box<T>::new(&v16, &v16, v10, v11, v12, v13);
  if ( v4 && v6 )
  {
    a1[1] = v6;
    *a1 = 0LL;
    core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v14);
  }
  else
  {
    *a1 = v14;
    a1[1] = (__int64)&off_148908;
  }
  return core::ptr::drop_in_place<alloc::string::String>(v20);
}
