        __int64 a6)
{
  unsigned __int128 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 contiguous; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // r9d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  char **v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // r8d
  int v32; // r9d
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  struct _Unwind_Exception *v37; // [rsp+0h] [rbp-338h]
  struct _Unwind_Exception *v38; // [rsp+0h] [rbp-338h]
  struct _Unwind_Exception *v39; // [rsp+0h] [rbp-338h]
  int v40; // [rsp+8h] [rbp-330h]
  int v41; // [rsp+8h] [rbp-330h]
  int v42; // [rsp+8h] [rbp-330h]
  __int64 v43; // [rsp+48h] [rbp-2F0h]
  unsigned __int64 v44; // [rsp+88h] [rbp-2B0h]
  __int64 v45; // [rsp+90h] [rbp-2A8h]
  __int64 v46; // [rsp+98h] [rbp-2A0h]
  unsigned __int64 v47; // [rsp+A0h] [rbp-298h]
  __int64 v48; // [rsp+B8h] [rbp-280h]
  __int64 v49; // [rsp+D0h] [rbp-268h]
  unsigned __int64 v50; // [rsp+120h] [rbp-218h]
  char is_empty; // [rsp+14Fh] [rbp-1E9h]
  __int64 v52; // [rsp+150h] [rbp-1E8h]
  __int64 v53; // [rsp+158h] [rbp-1E0h]
  __int64 v54; // [rsp+160h] [rbp-1D8h]
  __int64 v55; // [rsp+168h] [rbp-1D0h]
  unsigned __int64 v56; // [rsp+170h] [rbp-1C8h]
  unsigned __int64 v59; // [rsp+198h] [rbp-1A0h]
  __int64 v60; // [rsp+1A0h] [rbp-198h] BYREF
  __int64 v61; // [rsp+1A8h] [rbp-190h]
  __int64 v62; // [rsp+1B0h] [rbp-188h]
  __int64 v63; // [rsp+1B8h] [rbp-180h]
  __int64 v64; // [rsp+1C0h] [rbp-178h]
  unsigned __int64 v65; // [rsp+1C8h] [rbp-170h] BYREF
  __int64 v66; // [rsp+1D0h] [rbp-168h]
  __int64 v67; // [rsp+1D8h] [rbp-160h]
  __int64 v68; // [rsp+1E0h] [rbp-158h]
  unsigned __int64 v69; // [rsp+1E8h] [rbp-150h]
  __int64 v70; // [rsp+1F0h] [rbp-148h]
  __int64 v71; // [rsp+1F8h] [rbp-140h]
  __int64 v72; // [rsp+200h] [rbp-138h]
  unsigned __int64 v73; // [rsp+208h] [rbp-130h] BYREF
  __int64 v74; // [rsp+210h] [rbp-128h]
  __int64 v75; // [rsp+218h] [rbp-120h]
  unsigned __int64 v76; // [rsp+220h] [rbp-118h]
  __int64 v77; // [rsp+228h] [rbp-110h]
  __int64 v78; // [rsp+230h] [rbp-108h]
  __int64 v79; // [rsp+238h] [rbp-100h]
  unsigned __int64 v80; // [rsp+240h] [rbp-F8h] BYREF
  __int64 v81; // [rsp+248h] [rbp-F0h]
  __int64 v82; // [rsp+250h] [rbp-E8h]
  _BYTE v83[24]; // [rsp+258h] [rbp-E0h] BYREF
  int v84[8]; // [rsp+270h] [rbp-C8h] BYREF
  int v85[8]; // [rsp+290h] [rbp-A8h] BYREF
  __int64 v86; // [rsp+2B0h] [rbp-88h]
  unsigned __int64 v87; // [rsp+2B8h] [rbp-80h]
  __int64 v88; // [rsp+2C0h] [rbp-78h]
  __int64 v89; // [rsp+2C8h] [rbp-70h]
  __int64 v90; // [rsp+2D0h] [rbp-68h]
  unsigned __int64 v91; // [rsp+2D8h] [rbp-60h] BYREF
  unsigned __int8 v92; // [rsp+2E7h] [rbp-51h] BYREF
  _BYTE v93[24]; // [rsp+2E8h] [rbp-50h] BYREF
  __int64 v94; // [rsp+300h] [rbp-38h]
  __int64 v95; // [rsp+308h] [rbp-30h]
  int v96[2]; // [rsp+310h] [rbp-28h]
  __int64 v97; // [rsp+328h] [rbp-10h]
  __int64 v98; // [rsp+330h] [rbp-8h]

  v60 = a2;
  v61 = a5;
  v62 = a6;
  v59 = (*(__int64 (**)(void))(a4 + 48))();
  v6 = 0x400 * (unsigned __int128)v59;
  v56 = v59 << 10;
  if ( !is_mul_ok(0x400uLL, v59) )
    core::panicking::panic_const::panic_const_mul_overflow(&off_129890, a2, *((_QWORD *)&v6 + 1));
  if ( !v56 )
    core::panicking::panic(aAssertionFaile_3, 46LL, &off_1298A8);
  if ( v61 )
  {
    if ( v62 )
    {
      v53 = core::num::nonzero::NonZero<T>::new(v62, a2, *((_QWORD *)&v6 + 1));
      v97 = v53;
      if ( !v53 )
        core::option::unwrap_failed(&off_1298D8);
      v52 = v97;
      alloc::vec::Vec<T>::new(&v73);
      v72 = v52;
      v69 = v73;
      v70 = v74;
      v71 = v75;
      v65 = v73;
      v66 = v74;
      v67 = v75;
      v68 = v52;
    }
    else
    {
      v65 = 0x8000000000000000LL;
    }
  }
  else
  {
    v55 = core::num::nonzero::NonZero<T>::new(76LL, a2, *((_QWORD *)&v6 + 1));
    v98 = v55;
    if ( !v55 )
      core::option::unwrap_failed(&off_1298C0);
    v54 = v98;
    alloc::vec::Vec<T>::new(&v80);
    v79 = v54;
    v76 = v80;
    v77 = v81;
    v78 = v82;
    v65 = v80;
    v66 = v81;
    v67 = v82;
    v68 = v54;
  }
  alloc::vec::from_elem(v83, 0LL, 0x8000LL);
  is_empty = alloc::vec::Vec<T,A>::is_empty(v83);
  if ( (is_empty & 1) != 0 )
    core::panicking::panic(aAssertionFaile_2, 42LL, &off_1299B0);
  alloc::collections::vec_deque::VecDeque<T>::new(v84);
  alloc::collections::vec_deque::VecDeque<T>::new(v85);
  while ( 1 )
  {
    v7 = <alloc::vec::Vec<T,A> as core::ops::deref::DerefMut>::deref_mut(v83);
    v86 = std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(a1, v7, v8);
    v87 = v9;
    if ( v86 )
    {
      v91 = v87;
      v92 = std::io::error::Error::kind(&v91);
      <std::io::error::ErrorKind as core::cmp::PartialEq>::eq(&v92, asc_17C46);
      uu_base32::base_common::format_read_error(v93, v92);
      v27 = (char **)v93;
      v63 = uucore::mods::error::USimpleError::new(1LL, v93);
      v64 = v28;
      core::ptr::drop_in_place<std::io::error::Error>(&v91);
      goto LABEL_31;
    }
    v50 = v87;
    if ( !v87 )
      break;
    v45 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v83, v87, &off_129920);
    v46 = v22;
    v47 = alloc::collections::vec_deque::VecDeque<T,A>::len(v84);
    v44 = v56 - v47;
    if ( v56 < v47 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_129938);
    if ( v44 > v50 )
    {
      <alloc::collections::vec_deque::VecDeque<T,A> as core::iter::traits::collect::Extend<&T>>::extend(v84, v45, v46);
      if ( alloc::collections::vec_deque::VecDeque<T,A>::len(v84) >= v56 )
        core::panicking::panic(aAssertionFaile_4, 66LL, &off_129998);
    }
    else
    {
      v23 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer(
              a3,
              a4,
              v56,
              v44,
              v45,
              v46,
              (__int64)v85,
              (__int64)v84);
      v25 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v23, v24);
      v88 = v25;
      v89 = v26;
      if ( v25 )
      {
        LODWORD(v27) = v89;
        v30 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v88,
                v89,
                &off_129980);
        v63 = v30;
        v64 = v29;
        goto LABEL_31;
      }
      if ( alloc::collections::vec_deque::VecDeque<T,A>::len(v84) >= v56 )
        core::panicking::panic(aAssertionFaile_4, 66LL, &off_129950);
      v43 = uu_base32::base_common::fast_encode::write_to_output(&v65, v85, &v60, &unk_129738, 0LL);
      v90 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v43);
      if ( v90 )
      {
        v27 = &off_129968;
        v30 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v90,
                &off_129968);
        v63 = v30;
        v64 = v29;
        goto LABEL_31;
      }
    }
  }
  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(v84);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(a4 + 40))(a3, contiguous, v11, v85);
  v94 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v12, v13);
  v95 = v14;
  if ( v94 )
  {
    LODWORD(v27) = v95;
    v30 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v94,
            v95,
            &off_129908);
    v63 = v30;
    v64 = v29;
  }
  else
  {
    v49 = uu_base32::base_common::fast_encode::write_to_output(&v65, v85, &v60, &unk_129738, 1LL);
    v48 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v49);
    *(_QWORD *)v96 = v48;
    if ( !v48 )
    {
      v63 = 0LL;
      core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(
        (int)v85,
        (int)v85,
        0,
        0,
        v15,
        v16,
        v37,
        v40);
      core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(
        (int)v84,
        (int)v85,
        v17,
        v18,
        v19,
        v20,
        v38,
        v41);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v83);
      core::ptr::drop_in_place<core::option::Option<uu_base32::base_common::fast_encode::LineWrapping>>(&v65);
      return v63;
    }
    v27 = &off_1298F0;
    v30 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *(_QWORD *)v96,
            &off_1298F0);
    v63 = v30;
    v64 = v29;
  }
LABEL_31:
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(
    (int)v85,
    (int)v27,
    v29,
    v30,
    v31,
    v32,
    v37,
    v40);
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(
    (int)v84,
    (int)v27,
    v33,
    v34,
    v35,
    v36,
    v39,
    v42);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v83);
  core::ptr::drop_in_place<core::option::Option<uu_base32::base_common::fast_encode::LineWrapping>>(&v65);
  return v63;
}
