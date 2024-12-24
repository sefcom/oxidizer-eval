__int64 __fastcall uu_factor::print_factors_str(__int64 a1, __int128 *a2, _QWORD *a3, char a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int128 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int128 v13; // [rsp+0h] [rbp-148h] BYREF
  __int128 *v14; // [rsp+10h] [rbp-138h]
  __int128 v15; // [rsp+20h] [rbp-128h] BYREF
  __int128 *v16; // [rsp+30h] [rbp-118h]
  __int64 v17; // [rsp+38h] [rbp-110h]
  __int64 v18; // [rsp+40h] [rbp-108h]
  __int128 v19; // [rsp+60h] [rbp-E8h] BYREF
  __int128 *v20; // [rsp+70h] [rbp-D8h]
  __int64 (__fastcall *v21)(); // [rsp+78h] [rbp-D0h]
  __int128 v22; // [rsp+80h] [rbp-C8h] BYREF
  __int128 *v23; // [rsp+90h] [rbp-B8h]
  __int128 v24; // [rsp+98h] [rbp-B0h]
  __int128 *v25; // [rsp+A8h] [rbp-A0h]
  __int128 v26; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v27; // [rsp+C0h] [rbp-88h]
  __int128 v28; // [rsp+D0h] [rbp-78h] BYREF
  __int128 *v29; // [rsp+E0h] [rbp-68h]
  __int128 v30; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-50h]
  __int128 v32; // [rsp+100h] [rbp-48h] BYREF
  __int128 *v33; // [rsp+110h] [rbp-38h]

  v7 = core::str::<impl str>::trim_matches();
  num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(
    &v30,
    v7,
    v8,
    10LL);
  if ( (_QWORD)v30 != 0x8000000000000000LL )
  {
    v27 = v31;
    v26 = v30;
    num_bigint::biguint::convert::<impl core::convert::From<u64> for num_bigint::biguint::BigUint>::from(&v32);
    v15 = v32;
    v16 = v33;
    if ( (unsigned __int8)num_bigint::biguint::cmp_slice(*((_QWORD *)&v26 + 1), v27, *((_QWORD *)&v32 + 1)) == 1 )
    {
      core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v15);
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v15, &v26);
      v20 = v16;
      v19 = v15;
      *(_QWORD *)&v15 = 2LL;
      num_prime::nt_funcs::factors(&v22, &v19, &v15);
    }
    else
    {
      core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v15);
      *(_QWORD *)&v22 = 0LL;
      v23 = 0LL;
      *(_QWORD *)&v24 = 0x8000000000000000LL;
    }
    v29 = v23;
    v28 = v22;
    v14 = v25;
    v13 = v24;
    if ( (_QWORD)v24 == 0x8000000000000000LL )
    {
      v16 = v29;
      v15 = v28;
      v11 = uu_factor::write_result(a3, (__int64)&v26, (__int64)&v15, a4);
      v10 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v11);
      if ( !v10 )
      {
        core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<num_bigint::biguint::BigUint>>>(&v13);
        core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v26);
        return 0LL;
      }
    }
    else
    {
      v20 = v14;
      v19 = v13;
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v22);
      v16 = v23;
      v15 = v22;
      LODWORD(v17) = 1;
      v10 = alloc::boxed::Box<T>::new(&v15);
      core::ptr::drop_in_place<alloc::vec::Vec<num_bigint::biguint::BigUint>>(&v19);
      core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>(&v28);
    }
    core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v26);
    return v10;
  }
  *(_QWORD *)&v9 = uucore::util_name(&v30, v7);
  v22 = v9;
  *(_QWORD *)&v19 = &v22;
  *((_QWORD *)&v19 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v15 = &unk_18ACE8;
  *((_QWORD *)&v15 + 1) = 2LL;
  v18 = 0LL;
  v16 = &v19;
  v17 = 1LL;
  std::io::stdio::_eprint(&v15);
  *(_QWORD *)&v22 = 0LL;
  *((_QWORD *)&v22 + 1) = a1;
  v23 = a2;
  LOBYTE(v24) = 0;
  LOBYTE(v13) = core::result::Result<T,E>::unwrap_err(&v30);
  *(_QWORD *)&v19 = &v22;
  *((_QWORD *)&v19 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
  v20 = &v13;
  v21 = <num_bigint::ParseBigIntError as core::fmt::Display>::fmt;
  *(_QWORD *)&v15 = &unk_18AD20;
  *((_QWORD *)&v15 + 1) = 3LL;
  v18 = 0LL;
  v16 = &v19;
  v17 = 2LL;
  std::io::stdio::_eprint(&v15);
  uucore::mods::error::set_exit_code(1LL);
  return 0LL;
}
