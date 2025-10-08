__int64 __fastcall uu_tsort::Graph::find_and_break_cycle(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r13
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v12; // [rsp+8h] [rbp-F0h]
  __int64 v13; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+20h] [rbp-D8h]
  __int128 v15; // [rsp+28h] [rbp-D0h] BYREF
  __int64 **v16; // [rsp+38h] [rbp-C0h]
  __int64 v17; // [rsp+40h] [rbp-B8h]
  __int64 v18; // [rsp+48h] [rbp-B0h]
  __int64 *v19; // [rsp+58h] [rbp-A0h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+60h] [rbp-98h]
  __int64 *v21; // [rsp+68h] [rbp-90h]
  __int64 (__fastcall *v22)(); // [rsp+70h] [rbp-88h]
  __int64 v23; // [rsp+78h] [rbp-80h] BYREF
  __int128 v24; // [rsp+80h] [rbp-78h]
  __int64 **v25; // [rsp+90h] [rbp-68h]
  __int64 v26; // [rsp+98h] [rbp-60h]
  __int64 *v27; // [rsp+A0h] [rbp-58h]
  __int64 v28; // [rsp+A8h] [rbp-50h]
  __int64 v29; // [rsp+B0h] [rbp-48h] BYREF
  _QWORD *v30; // [rsp+B8h] [rbp-40h]
  __int64 v31; // [rsp+C0h] [rbp-38h]

  v26 = a2;
  uu_tsort::Graph::detect_cycle(&v29, a1);
  <alloc::string::String as core::clone::Clone>::clone(&v15, a1);
  v25 = v16;
  v24 = v15;
  v23 = 2LL;
  uucore::mods::error::set_exit_code(1LL);
  v13 = uucore::util_name();
  v14 = v2;
  v19 = &v13;
  v20 = <&T as core::fmt::Display>::fmt;
  v21 = &v23;
  v22 = <uu_tsort::TsortError as core::fmt::Display>::fmt;
  *(_QWORD *)&v15 = &unk_EB378;
  *((_QWORD *)&v15 + 1) = 3LL;
  v18 = 0LL;
  v16 = &v19;
  v17 = 2LL;
  std::io::stdio::_eprint(&v15);
  v28 = a1;
  core::ptr::drop_in_place<uu_tsort::TsortError>(&v23);
  if ( !v31 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_EB3A8);
  v3 = v30;
  v12 = v31;
  v4 = &v30[2 * v31];
  v27 = v30;
  do
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, *v3, v3[1]);
    v25 = v16;
    v24 = v15;
    v23 = 3LL;
    uucore::mods::error::set_exit_code(1LL);
    v13 = uucore::util_name();
    v14 = v5;
    v19 = &v13;
    v20 = <&T as core::fmt::Display>::fmt;
    v21 = &v23;
    v22 = <uu_tsort::TsortError as core::fmt::Display>::fmt;
    *(_QWORD *)&v15 = &unk_EB378;
    *((_QWORD *)&v15 + 1) = 3LL;
    v18 = 0LL;
    v16 = &v19;
    v17 = 2LL;
    std::io::stdio::_eprint(&v15);
    core::ptr::drop_in_place<uu_tsort::TsortError>(&v23);
    v3 += 2;
  }
  while ( v3 != v4 );
  v6 = v28;
  v7 = v27;
  if ( v12 == 1 )
    core::panicking::panic_bounds_check(1LL, 1LL, &off_EB3C0);
  v8 = v27[2];
  v9 = v27[3];
  uu_tsort::Graph::remove_edge(v28, *v27, v27[1], v8, v9);
  if ( !uu_tsort::Graph::indegree(v6) )
    core::option::unwrap_failed(&off_EB3D8);
  if ( !v10 )
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(v26, v8, v9, &off_EB3F0);
  return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v29, v7);
}