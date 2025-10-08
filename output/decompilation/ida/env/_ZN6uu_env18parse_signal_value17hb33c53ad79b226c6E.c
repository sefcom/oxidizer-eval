__int64 __fastcall uu_env::parse_signal_value(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rax
  __int128 v9; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD *v10; // [rsp+10h] [rbp-A8h]
  __int64 v11; // [rsp+18h] [rbp-A0h]
  __int64 v12; // [rsp+20h] [rbp-98h]
  char v13[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v14; // [rsp+38h] [rbp-80h]
  __int64 v15; // [rsp+40h] [rbp-78h]
  _QWORD v16[2]; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v17[3]; // [rsp+58h] [rbp-60h] BYREF
  char v18; // [rsp+70h] [rbp-48h]
  __int128 v19; // [rsp+78h] [rbp-40h] BYREF
  _QWORD *v20; // [rsp+88h] [rbp-30h]

  alloc::str::<impl str>::to_uppercase(v13);
  v4 = uucore::features::signals::signal_by_name_or_value(v14, v15);
  v6 = v5;
  v17[0] = 0LL;
  v17[1] = a2;
  v17[2] = a3;
  v18 = 1;
  v16[0] = v17;
  v16[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v9 = &unk_110868;
  *((_QWORD *)&v9 + 1) = 2LL;
  v12 = 0LL;
  v10 = v16;
  v11 = 1LL;
  ((void (__fastcall *)(__int128 *, __int128 *))core::option::Option<T>::map_or_else)(&v19, &v9);
  LODWORD(v11) = 125;
  v9 = v19;
  v10 = v20;
  v7 = alloc::boxed::Box<T>::new(&v9);
  if ( ((v6 != 0) & v4) != 0 )
  {
    a1[1] = v6;
    *a1 = 0LL;
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      v7,
      &off_1108A8);
  }
  else
  {
    *a1 = v7;
    a1[1] = (__int64)&off_1108A8;
  }
  return core::ptr::drop_in_place<alloc::string::String>(v13);
}