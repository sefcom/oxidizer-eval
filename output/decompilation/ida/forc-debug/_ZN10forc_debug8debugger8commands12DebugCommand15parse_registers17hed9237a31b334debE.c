__int64 __fastcall forc_debug::debugger::commands::DebugCommand::parse_registers(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rdx
  char **v8; // rax
  _QWORD *v9; // rcx
  __int64 result; // rax
  _QWORD *v11; // rcx
  __int64 v12; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+10h] [rbp-A8h]
  __int64 v14; // [rsp+18h] [rbp-A0h]
  _QWORD *v15; // [rsp+20h] [rbp-98h]
  __int64 v16; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v18; // [rsp+40h] [rbp-78h] BYREF
  __int64 v19; // [rsp+50h] [rbp-68h]
  _QWORD v20[12]; // [rsp+58h] [rbp-60h] BYREF

  v15 = a1;
  v12 = 0LL;
  v13 = 4LL;
  v14 = 0LL;
  if ( !a3 )
  {
LABEL_8:
    v9 = v15;
    v15[3] = v14;
    v9[1] = v12;
    v9[2] = v13;
    result = 0x8000000000000004LL;
    *v9 = 0x8000000000000004LL;
    return result;
  }
  v3 = a2;
  v4 = a2 + 24 * a3;
  while ( 1 )
  {
    v16 = v3;
    v5 = *(_QWORD *)(v3 + 8);
    v6 = *(_QWORD *)(v3 + 16);
    if ( (forc_debug::cli::commands::parse_int(v5, v6) & 1) == 0 )
      break;
    v8 = &off_1F8CDC8;
LABEL_7:
    alloc::vec::Vec<T,A>::push(&v12, (unsigned int)v7, v8);
    v3 += 24LL;
    if ( v3 == v4 )
      goto LABEL_8;
  }
  if ( (forc_debug::names::register_index(v5, v6) & 1) != 0 )
  {
    v8 = &off_1F8CDE0;
    goto LABEL_7;
  }
  v17[0] = &v16;
  v17[1] = <&T as core::fmt::Display>::fmt;
  v20[0] = &off_1F8CDB8;
  v20[1] = 1LL;
  v20[4] = 0LL;
  v20[2] = v17;
  v20[3] = 1LL;
  core::option::Option<T>::map_or_else(&v18, 0LL, v7, v20);
  v11 = v15;
  v15[3] = v19;
  *(_OWORD *)(v11 + 1) = v18;
  *v11 = 0x8000000000000007LL;
  return core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v12, v13);
}