__int64 __fastcall uu_factor::print_factors_str(__int64 a1, _OWORD *a2, _QWORD *a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int128 v8; // rax
  char v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int128 v14; // [rsp+0h] [rbp-148h] BYREF
  __int64 v15; // [rsp+10h] [rbp-138h]
  __int128 v16; // [rsp+20h] [rbp-128h] BYREF
  _OWORD *v17; // [rsp+30h] [rbp-118h]
  unsigned __int64 v18; // [rsp+38h] [rbp-110h]
  __int64 v19; // [rsp+40h] [rbp-108h]
  __int64 v20; // [rsp+48h] [rbp-100h]
  __int128 v21; // [rsp+50h] [rbp-F8h] BYREF
  __int128 *v22; // [rsp+60h] [rbp-E8h]
  __int64 v23; // [rsp+68h] [rbp-E0h]
  __int64 v24; // [rsp+70h] [rbp-D8h]
  __int128 v25; // [rsp+90h] [rbp-B8h] BYREF
  __int128 *v26; // [rsp+A0h] [rbp-A8h]
  __int64 (__fastcall *v27)(); // [rsp+A8h] [rbp-A0h]
  _QWORD v28[4]; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v29; // [rsp+D0h] [rbp-78h] BYREF
  _OWORD *v30; // [rsp+E0h] [rbp-68h]
  __int128 v31; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-50h]
  char v33[8]; // [rsp+100h] [rbp-48h] BYREF
  __int64 v34; // [rsp+108h] [rbp-40h]
  __int64 v35; // [rsp+110h] [rbp-38h]

  v6 = core::str::<impl str>::trim_matches();
  num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(
    &v31,
    v6,
    v7,
    10LL);
  if ( __OFSUB__(0LL, (_QWORD)v31) )
  {
    *(_QWORD *)&v8 = uucore::util_name();
    v16 = v8;
    *(_QWORD *)&v25 = &v16;
    *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v21 = &unk_1441A0;
    *((_QWORD *)&v21 + 1) = 2LL;
    v24 = 0LL;
    v22 = &v25;
    v23 = 1LL;
    std::io::stdio::_eprint(&v21);
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = a1;
    v17 = a2;
    LOBYTE(v18) = 0;
    LOBYTE(v14) = core::result::Result<T,E>::unwrap_err(&v31);
    *(_QWORD *)&v25 = &v16;
    *((_QWORD *)&v25 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v26 = &v14;
    v27 = <num_bigint::ParseBigIntError as core::fmt::Display>::fmt;
    *(_QWORD *)&v21 = &unk_1441C0;
    *((_QWORD *)&v21 + 1) = 3LL;
    v24 = 0LL;
    v22 = &v25;
    v23 = 2LL;
    std::io::stdio::_eprint(&v21);
    uucore::mods::error::set_exit_code(1LL);
    return 0LL;
  }
  v15 = v32;
  v14 = v31;
  num_bigint::biguint::convert::<impl core::convert::From<u64> for num_bigint::biguint::BigUint>::from(v33, 1LL);
  v10 = num_bigint::biguint::cmp_slice(*((_QWORD *)&v14 + 1), v15, v34, v35);
  core::ptr::drop_in_place<num_bigint::biguint::BigUint>(v33);
  if ( v10 <= 0 )
  {
    *(_QWORD *)&v16 = 0LL;
    v17 = 0LL;
    v18 = 0x8000000000000000LL;
  }
  else
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v21, *((_QWORD *)&v14 + 1), v15);
    v26 = v22;
    v25 = v21;
    *(_QWORD *)&v21 = 2LL;
    num_prime::nt_funcs::factors(&v16, &v25, &v21);
  }
  v30 = v17;
  v29 = v16;
  v28[0] = v18;
  v28[1] = v19;
  v28[2] = v20;
  if ( v18 == 0x8000000000000000LL )
  {
    v11 = uu_factor::write_result(a3, (__int64)&v14, (__int64)&v29, a4);
    v12 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v11);
    if ( !v12 )
    {
      core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<num_bigint::biguint::BigUint>>>(v28);
      core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v14);
      return 0LL;
    }
    v13 = v12;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
      &v16,
      "Factorization incomplete. Remainders exists./home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu"
      "/factor/src/factor.rswrite errorTry ' --help' for more information.\n"
      "Disabling rust signal handlers failederror reading input: Error flushing stdout: \v",
      44LL);
    v22 = v17;
    v21 = v16;
    LODWORD(v23) = 1;
    v13 = alloc::boxed::Box<T>::new(&v21);
    core::ptr::drop_in_place<alloc::vec::Vec<num_bigint::biguint::BigUint>>(v28);
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>(&v29);
  }
  core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v14);
  return v13;
}