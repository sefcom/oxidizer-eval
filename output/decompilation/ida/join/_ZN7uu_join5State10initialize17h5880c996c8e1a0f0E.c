__int64 __fastcall uu_join::State::initialize(__int64 a1, __int64 a2, char a3)
{
  __int64 (__fastcall *v5)(); // rdx
  __int64 v6; // [rsp+0h] [rbp-C8h] BYREF
  __int64 *v7; // [rsp+8h] [rbp-C0h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+10h] [rbp-B8h]
  void *v9; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+20h] [rbp-A8h]
  __int64 **v11; // [rsp+28h] [rbp-A0h]
  __int64 v12; // [rsp+30h] [rbp-98h]
  __int64 v13; // [rsp+38h] [rbp-90h]
  _QWORD v14[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v15; // [rsp+58h] [rbp-70h] BYREF
  __int128 v16; // [rsp+60h] [rbp-68h]
  __int128 v17; // [rsp+70h] [rbp-58h]
  __int64 v18; // [rsp+80h] [rbp-48h]
  __int64 v19; // [rsp+88h] [rbp-40h] BYREF
  __int128 v20; // [rsp+90h] [rbp-38h]
  __int128 v21; // [rsp+A0h] [rbp-28h]
  __int64 v22; // [rsp+B0h] [rbp-18h]

  uu_join::State::read_line((__int64)&v19, a1, a2);
  if ( v19 == 0x8000000000000000LL )
    return 0LL;
  if ( v19 == 0x8000000000000001LL )
  {
    v6 = v20;
    v7 = (__int64 *)uucore::util_name(&v19);
    v8 = v5;
    v14[0] = &v7;
    v14[1] = <&T as core::fmt::Display>::fmt;
    v9 = &unk_132610;
    v10 = 2LL;
    v13 = 0LL;
    v11 = (__int64 **)v14;
    v12 = 1LL;
    std::io::stdio::_eprint(&v9);
    v7 = &v6;
    v8 = <std::io::error::Error as core::fmt::Display>::fmt;
    v9 = &unk_132630;
    v10 = 2LL;
    v13 = 0LL;
    v11 = &v7;
    v12 = 1LL;
    std::io::stdio::_eprint(&v9);
    std::process::exit(1);
  }
  v15 = v19;
  v16 = v20;
  v17 = v21;
  v18 = v22;
  alloc::vec::Vec<T,A>::push(a1, &v15);
  if ( !a3 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 16) )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_132650);
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
}
