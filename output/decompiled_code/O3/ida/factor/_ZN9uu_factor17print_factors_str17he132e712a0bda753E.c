__int64 __fastcall uu_factor::print_factors_str(__int64 a1, __int128 *a2, _QWORD *a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int128 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int128 v12; // [rsp+0h] [rbp-148h] BYREF
  __int128 *v13; // [rsp+10h] [rbp-138h]
  __int128 v14; // [rsp+20h] [rbp-128h] BYREF
  __int128 *v15; // [rsp+30h] [rbp-118h]
  __int64 v16; // [rsp+38h] [rbp-110h]
  __int64 v17; // [rsp+40h] [rbp-108h]
  __int128 v18; // [rsp+60h] [rbp-E8h] BYREF
  __int128 *v19; // [rsp+70h] [rbp-D8h]
  __int64 (__fastcall *v20)(); // [rsp+78h] [rbp-D0h]
  __int128 v21; // [rsp+80h] [rbp-C8h] BYREF
  __int128 *v22; // [rsp+90h] [rbp-B8h]
  __int128 v23; // [rsp+98h] [rbp-B0h]
  __int128 *v24; // [rsp+A8h] [rbp-A0h]
  __int128 v25; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-88h]
  __int128 v27; // [rsp+D0h] [rbp-78h] BYREF
  __int128 *v28; // [rsp+E0h] [rbp-68h]
  __int128 v29; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-50h]
  __int128 v31; // [rsp+100h] [rbp-48h] BYREF
  __int128 *v32; // [rsp+110h] [rbp-38h]

  v6 = core::str::<impl str>::trim_matches();
  num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(
    &v29,
    v6,
    v7,
    10LL);
  if ( (_QWORD)v29 != 0x8000000000000000LL )
  {
    v26 = v30;
    v25 = v29;
    num_bigint::biguint::convert::<impl core::convert::From<u64> for num_bigint::biguint::BigUint>::from(&v31);
    v14 = v31;
    v15 = v32;
    if ( (unsigned __int8)num_bigint::biguint::cmp_slice(*((_QWORD *)&v25 + 1), v26, *((_QWORD *)&v31 + 1)) == 1 )
    {
      core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v14);
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v14, &v25);
      v19 = v15;
      v18 = v14;
      *(_QWORD *)&v14 = 2LL;
      num_prime::nt_funcs::factors(&v21, &v18, &v14);
    }
    else
    {
      core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v14);
      *(_QWORD *)&v21 = 0LL;
      v22 = 0LL;
      *(_QWORD *)&v23 = 0x8000000000000000LL;
    }
    v28 = v22;
    v27 = v21;
    v13 = v24;
    v12 = v23;
    if ( (_QWORD)v23 == 0x8000000000000000LL )
    {
      v15 = v28;
      v14 = v27;
      v10 = uu_factor::write_result(a3, (__int64)&v25, (__int64)&v14, a4);
      v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v10);
      if ( !v9 )
      {
        core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<num_bigint::biguint::BigUint>>>(&v12);
        core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v25);
        return 0LL;
      }
    }
    else
    {
      v19 = v13;
      v18 = v12;
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v21);
      v15 = v22;
      v14 = v21;
      LODWORD(v16) = 1;
      v9 = alloc::boxed::Box<T>::new(&v14);
      core::ptr::drop_in_place<alloc::vec::Vec<num_bigint::biguint::BigUint>>(&v18);
      core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>(&v27);
    }
    core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v25);
    return v9;
  }
  *(_QWORD *)&v8 = uucore::util_name();
  v21 = v8;
  *(_QWORD *)&v18 = &v21;
  *((_QWORD *)&v18 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v14 = &unk_18AE20;
  *((_QWORD *)&v14 + 1) = 2LL;
  v17 = 0LL;
  v15 = &v18;
  v16 = 1LL;
  std::io::stdio::_eprint(&v14);
  *(_QWORD *)&v21 = 0LL;
  *((_QWORD *)&v21 + 1) = a1;
  v22 = a2;
  LOBYTE(v23) = 0;
  LOBYTE(v12) = core::result::Result<T,E>::unwrap_err(&v29);
  *(_QWORD *)&v18 = &v21;
  *((_QWORD *)&v18 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
  v19 = &v12;
  v20 = <num_bigint::ParseBigIntError as core::fmt::Display>::fmt;
  *(_QWORD *)&v14 = &unk_18AE40;
  *((_QWORD *)&v14 + 1) = 3LL;
  v17 = 0LL;
  v15 = &v18;
  v16 = 2LL;
  std::io::stdio::_eprint(&v14);
  uucore::mods::error::set_exit_code(1LL);
  return 0LL;
}
