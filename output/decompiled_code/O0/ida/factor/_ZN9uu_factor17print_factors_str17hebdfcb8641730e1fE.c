__int64 __fastcall uu_factor::print_factors_str(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-398h]
  int v15; // [rsp+8h] [rbp-390h]
  int v16; // [rsp+10h] [rbp-388h]
  char v17; // [rsp+18h] [rbp-380h]
  int v18; // [rsp+20h] [rbp-378h]
  int v19; // [rsp+28h] [rbp-370h]
  int v20; // [rsp+30h] [rbp-368h]
  int v21; // [rsp+38h] [rbp-360h]
  __int64 v22; // [rsp+38h] [rbp-360h]
  int v23; // [rsp+40h] [rbp-358h]
  int v24; // [rsp+48h] [rbp-350h]
  int v25; // [rsp+50h] [rbp-348h]
  struct _Unwind_Exception *v26; // [rsp+58h] [rbp-340h]
  int v27; // [rsp+60h] [rbp-338h]
  __int64 v30; // [rsp+88h] [rbp-310h]
  int v31[4]; // [rsp+98h] [rbp-300h] BYREF
  int v32[2]; // [rsp+A8h] [rbp-2F0h]
  _BYTE v33[48]; // [rsp+B0h] [rbp-2E8h] BYREF
  __int128 v34; // [rsp+E0h] [rbp-2B8h] BYREF
  __int128 v35; // [rsp+F0h] [rbp-2A8h]
  _QWORD v36[2]; // [rsp+100h] [rbp-298h] BYREF
  _BYTE v37[48]; // [rsp+110h] [rbp-288h] BYREF
  _OWORD v38[2]; // [rsp+140h] [rbp-258h] BYREF
  __int128 v39; // [rsp+168h] [rbp-230h]
  _BYTE v40[32]; // [rsp+178h] [rbp-220h] BYREF
  __int128 v41; // [rsp+198h] [rbp-200h]
  char v42; // [rsp+1AFh] [rbp-1E9h] BYREF
  __int128 v43; // [rsp+1B0h] [rbp-1E8h] BYREF
  __int64 v44; // [rsp+1C0h] [rbp-1D8h]
  int v45[4]; // [rsp+1D0h] [rbp-1C8h] BYREF
  int v46[2]; // [rsp+1E0h] [rbp-1B8h]
  char v47[16]; // [rsp+1E8h] [rbp-1B0h] BYREF
  int v48[2]; // [rsp+1F8h] [rbp-1A0h]
  int v49[4]; // [rsp+200h] [rbp-198h] BYREF
  int v50[2]; // [rsp+210h] [rbp-188h]
  int v51[2]; // [rsp+218h] [rbp-180h] BYREF
  char v52[8]; // [rsp+220h] [rbp-178h]
  int v53[2]; // [rsp+228h] [rbp-170h]
  int v54[2]; // [rsp+230h] [rbp-168h]
  int v55[2]; // [rsp+238h] [rbp-160h]
  int v56[2]; // [rsp+240h] [rbp-158h]
  int v57[2]; // [rsp+248h] [rbp-150h] BYREF
  int v58[2]; // [rsp+250h] [rbp-148h]
  int v59[2]; // [rsp+258h] [rbp-140h]
  int v60[2]; // [rsp+260h] [rbp-138h] BYREF
  int v61[2]; // [rsp+268h] [rbp-130h]
  int v62[2]; // [rsp+270h] [rbp-128h]
  int v63[6]; // [rsp+278h] [rbp-120h] BYREF
  int v64[2]; // [rsp+290h] [rbp-108h] BYREF
  int v65[2]; // [rsp+2D0h] [rbp-C8h] BYREF
  int v66[2]; // [rsp+2D8h] [rbp-C0h]
  int v67[2]; // [rsp+2E0h] [rbp-B8h]
  int v68[2]; // [rsp+2E8h] [rbp-B0h]
  int v69[2]; // [rsp+2F0h] [rbp-A8h]
  int v70[2]; // [rsp+2F8h] [rbp-A0h]
  __int128 v71; // [rsp+300h] [rbp-98h] BYREF
  __int64 v72; // [rsp+310h] [rbp-88h]
  __int64 v73; // [rsp+320h] [rbp-78h]
  __int64 v74; // [rsp+328h] [rbp-70h]
  int v75[4]; // [rsp+330h] [rbp-68h] BYREF
  int v76[2]; // [rsp+340h] [rbp-58h]
  char v77; // [rsp+354h] [rbp-44h]
  char v78; // [rsp+355h] [rbp-43h]
  char v79; // [rsp+356h] [rbp-42h]
  char v80; // [rsp+357h] [rbp-41h]
  _QWORD *v81; // [rsp+368h] [rbp-30h]
  __int64 (__fastcall *v82)(); // [rsp+370h] [rbp-28h]
  char *v83; // [rsp+378h] [rbp-20h]
  __int64 (__fastcall *v84)(); // [rsp+380h] [rbp-18h]
  _BYTE *v85; // [rsp+388h] [rbp-10h]
  __int64 (__fastcall *v86)(); // [rsp+390h] [rbp-8h]

  v78 = 0;
  v77 = 0;
  v4 = core::str::<impl str>::trim();
  v79 = 1;
  v80 = 1;
  core::str::<impl str>::parse(v31, v4);
  if ( *(_QWORD *)v31 == 0x8000000000000000LL )
  {
    v36[0] = uucore::util_name();
    v36[1] = v13;
    v81 = v36;
    v82 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v35 = v36;
    *((_QWORD *)&v35 + 1) = <&T as core::fmt::Display>::fmt;
    v34 = v35;
    core::fmt::Arguments::new_v1(v33, &unk_17CFF8, &v34);
    std::io::stdio::_eprint(v33);
    os_display::native::Quotable::maybe_quote(v40, a1, a2);
    v85 = v40;
    v86 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v39 = v40;
    *((_QWORD *)&v39 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v79 = 0;
    v80 = 0;
    v44 = *(_QWORD *)v32;
    v43 = *(_OWORD *)v31;
    v42 = core::result::Result<T,E>::unwrap_err(&v43, &off_17D048) & 1;
    v83 = &v42;
    v84 = <num_bigint::ParseBigIntError as core::fmt::Display>::fmt;
    *(_QWORD *)&v41 = &v42;
    *((_QWORD *)&v41 + 1) = <num_bigint::ParseBigIntError as core::fmt::Display>::fmt;
    v38[0] = v39;
    v38[1] = v41;
    core::fmt::Arguments::new_v1(v37, &unk_17D018, v38);
    std::io::stdio::_eprint(v37);
    uucore::mods::error::set_exit_code(1LL);
    v30 = 0LL;
LABEL_23:
    v79 = 0;
    v80 = 0;
    return v30;
  }
  v80 = 0;
  *(_QWORD *)v46 = *(_QWORD *)v32;
  *(_OWORD *)v45 = *(_OWORD *)v31;
  num_traits::cast::FromPrimitive::from_u32(v60, 1LL);
  if ( *(_QWORD *)v60 == 0x8000000000000000LL )
    core::option::unwrap_failed(&off_17CFC8);
  *(_QWORD *)v57 = *(_QWORD *)v60;
  *(_QWORD *)v58 = *(_QWORD *)v61;
  *(_QWORD *)v59 = *(_QWORD *)v62;
  if ( (core::cmp::PartialOrd::gt(v45, v57) & 1) != 0 )
  {
    core::ptr::drop_in_place<num_bigint::biguint::BigUint>(v57);
    <num_bigint::biguint::BigUint as core::clone::Clone>::clone(v63, v45);
    *(_QWORD *)v64 = 2LL;
    num_prime::nt_funcs::factors(
      (int)v51,
      (int)v63,
      (int)v64,
      v5,
      v6,
      v7,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  else
  {
    core::ptr::drop_in_place<num_bigint::biguint::BigUint>(v57);
    alloc::collections::btree::map::BTreeMap<K,V>::new(v65);
    *(_QWORD *)v68 = 0x8000000000000000LL;
    *(_QWORD *)v51 = *(_QWORD *)v65;
    *(_QWORD *)v52 = *(_QWORD *)v66;
    *(_QWORD *)v53 = *(_QWORD *)v67;
    *(_QWORD *)v54 = 0x8000000000000000LL;
    *(_QWORD *)v55 = *(_QWORD *)v69;
    *(_QWORD *)v56 = *(_QWORD *)v70;
  }
  v78 = 1;
  *(_QWORD *)v47 = *(_QWORD *)v51;
  *(_QWORD *)&v47[8] = *(_QWORD *)v52;
  *(_QWORD *)v48 = *(_QWORD *)v53;
  v77 = 1;
  *(_QWORD *)v49 = *(_QWORD *)v54;
  *(_QWORD *)&v49[2] = *(_QWORD *)v55;
  *(_QWORD *)v50 = *(_QWORD *)v56;
  if ( *(_QWORD *)v54 != 0x8000000000000000LL )
  {
    v77 = 0;
    v72 = *(_QWORD *)v50;
    v71 = *(_OWORD *)v49;
    v30 = uucore::mods::error::USimpleError::new(1LL, aFactorizationI, 44LL);
    core::ptr::drop_in_place<alloc::vec::Vec<num_bigint::biguint::BigUint>>(&v71);
    goto LABEL_12;
  }
  v78 = 0;
  *(_QWORD *)v76 = *(_QWORD *)v48;
  *(_OWORD *)v75 = *(_OWORD *)v47;
  v22 = uu_factor::write_result(a3, (__int64)v45, (__int128 *)v75, a4 & 1);
  v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v22);
  v10 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v8, v9);
  v73 = v10;
  v74 = v11;
  if ( v10 )
  {
    v30 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v73,
            v74,
            &off_17CFE0);
LABEL_12:
    if ( *(_QWORD *)v49 != 0x8000000000000000LL && (v77 & 1) != 0 )
      core::ptr::drop_in_place<alloc::vec::Vec<num_bigint::biguint::BigUint>>(v49);
    v77 = 0;
    if ( (v78 & 1) != 0 )
      core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>(v47);
    v78 = 0;
    core::ptr::drop_in_place<num_bigint::biguint::BigUint>(v45);
    goto LABEL_23;
  }
  v30 = 0LL;
  core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<num_bigint::biguint::BigUint>>>(v49);
  v77 = 0;
  v78 = 0;
  core::ptr::drop_in_place<num_bigint::biguint::BigUint>(v45);
  v79 = 0;
  v80 = 0;
  return v30;
}
