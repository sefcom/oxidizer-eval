__int64 __fastcall uu_join::State::initialize(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // r14
  __int64 (__fastcall *v11)(); // rdx
  __int64 v12; // [rsp+8h] [rbp-D0h] BYREF
  __int64 *v13; // [rsp+10h] [rbp-C8h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+18h] [rbp-C0h]
  void *v15; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+28h] [rbp-B0h]
  __int64 **v17; // [rsp+30h] [rbp-A8h]
  __int64 v18; // [rsp+38h] [rbp-A0h]
  __int64 v19; // [rsp+40h] [rbp-98h]
  _QWORD v20[2]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v21[48]; // [rsp+60h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-48h] BYREF
  __int128 v23; // [rsp+98h] [rbp-40h]
  __int128 v24; // [rsp+A8h] [rbp-30h]
  __int64 v25; // [rsp+B8h] [rbp-20h]

  uu_join::State::read_line(&v22, a1, a2);
  if ( v22 == 0x8000000000000000LL )
    return 0LL;
  if ( v22 == 0x8000000000000001LL )
  {
    v12 = v23;
    v13 = (__int64 *)uucore::util_name();
    v14 = v11;
    v20[0] = &v13;
    v20[1] = <&T as core::fmt::Display>::fmt;
    v15 = &unk_FAFB8;
    v16 = 2LL;
    v19 = 0LL;
    v17 = (__int64 **)v20;
    v18 = 1LL;
    std::io::stdio::_eprint(&v15);
    v13 = &v12;
    v14 = <std::io::error::Error as core::fmt::Display>::fmt;
    v15 = &unk_FAFD8;
    v16 = 2LL;
    v19 = 0LL;
    v17 = &v13;
    v18 = 1LL;
    std::io::stdio::_eprint(&v15);
    std::process::exit(1);
  }
  *(_QWORD *)v21 = v22;
  *(_QWORD *)&v21[40] = v25;
  *(_OWORD *)&v21[24] = v24;
  *(_OWORD *)&v21[8] = v23;
  v4 = a1[2];
  if ( v4 == *a1 )
    alloc::raw_vec::RawVec<T,A>::grow_one(a1);
  v5 = a1[1];
  v6 = 48 * v4;
  v7 = *(_OWORD *)v21;
  v8 = *(_OWORD *)&v21[16];
  *(_OWORD *)(v5 + v6 + 32) = *(_OWORD *)&v21[32];
  *(_OWORD *)(v5 + v6 + 16) = v8;
  *(_OWORD *)(v5 + v6) = v7;
  v9 = v4 + 1;
  a1[2] = v9;
  if ( !a3 )
    return 0LL;
  if ( !v9 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_FAFA0);
  return *(_QWORD *)(a1[1] + 16LL);
}
