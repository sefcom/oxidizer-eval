__int64 __fastcall uu_base32::base_common::fast_decode::fast_decode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // kr00_8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // [rsp+0h] [rbp-408h]
  int v31; // [rsp+8h] [rbp-400h]
  int v32; // [rsp+10h] [rbp-3F8h]
  int v33; // [rsp+18h] [rbp-3F0h]
  int v34; // [rsp+20h] [rbp-3E8h]
  unsigned __int64 v35; // [rsp+28h] [rbp-3E0h]
  struct _Unwind_Exception *v36; // [rsp+30h] [rbp-3D8h]
  int v37; // [rsp+38h] [rbp-3D0h]
  __int64 v38; // [rsp+48h] [rbp-3C0h]
  unsigned __int64 v39; // [rsp+88h] [rbp-380h]
  unsigned __int64 v40; // [rsp+C8h] [rbp-340h]
  char v41; // [rsp+D7h] [rbp-331h]
  __int64 v42; // [rsp+D8h] [rbp-330h]
  unsigned __int64 v43; // [rsp+E0h] [rbp-328h]
  __int64 v44; // [rsp+108h] [rbp-300h]
  __int64 v45; // [rsp+120h] [rbp-2E8h]
  unsigned __int64 v48; // [rsp+1D8h] [rbp-230h]
  __int64 v49; // [rsp+1E0h] [rbp-228h] BYREF
  __int64 v50; // [rsp+1E8h] [rbp-220h]
  __int64 v51; // [rsp+1F0h] [rbp-218h]
  _BYTE dest[256]; // [rsp+1F8h] [rbp-210h] BYREF
  _BYTE v53[24]; // [rsp+2F8h] [rbp-110h] BYREF
  _BYTE v54[24]; // [rsp+310h] [rbp-F8h] BYREF
  _BYTE v55[24]; // [rsp+328h] [rbp-E0h] BYREF
  _BYTE v56[24]; // [rsp+340h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+358h] [rbp-B0h]
  __int64 v58; // [rsp+360h] [rbp-A8h]
  __int64 v59; // [rsp+368h] [rbp-A0h]
  unsigned __int64 v60; // [rsp+370h] [rbp-98h]
  int v61[2]; // [rsp+378h] [rbp-90h] BYREF
  __int64 v62; // [rsp+380h] [rbp-88h]
  _QWORD v63[2]; // [rsp+388h] [rbp-80h] BYREF
  unsigned __int8 *v64; // [rsp+398h] [rbp-70h]
  __int64 v65; // [rsp+3A0h] [rbp-68h]
  __int64 v66; // [rsp+3A8h] [rbp-60h]
  __int64 v67; // [rsp+3B0h] [rbp-58h]
  __int64 v68; // [rsp+3B8h] [rbp-50h] BYREF
  unsigned __int8 v69; // [rsp+3C7h] [rbp-41h] BYREF
  _BYTE v70[24]; // [rsp+3C8h] [rbp-40h] BYREF
  __int64 v71; // [rsp+3E0h] [rbp-28h]
  __int64 v72; // [rsp+3E8h] [rbp-20h]
  __int64 v73; // [rsp+3F0h] [rbp-18h]

  v49 = a2;
  (*(void (__fastcall **)(__int64))(a4 + 24))(a3);
  v5 = (*(__int64 (__fastcall **)(__int64))(a4 + 56))(a3);
  v4 = 0x400 * (unsigned __int128)v5;
  v48 = v5 << 10;
  if ( !is_mul_ok(0x400uLL, v5) )
    core::panicking::panic_const::panic_const_mul_overflow(&off_129708, a2, *((_QWORD *)&v4 + 1));
  if ( !(_QWORD)v4 )
    core::panicking::panic(aAssertionFaile, 46LL, &off_129720);
  uu_base32::base_common::fast_decode::alphabet_to_table(dest);
  alloc::vec::from_elem(v53, 0LL, 0x8000LL);
  if ( (alloc::vec::Vec<T,A>::is_empty(v53) & 1) != 0 )
    core::panicking::panic(aAssertionFaile_2, 42LL, &off_129860);
  alloc::vec::Vec<T>::new(v54);
  alloc::vec::Vec<T>::new(v55);
  alloc::vec::Vec<T>::new(v56);
  while ( 1 )
  {
    v6 = <alloc::vec::Vec<T,A> as core::ops::deref::DerefMut>::deref_mut(v53);
    v57 = std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(a1, v6, v7);
    v58 = v8;
    if ( v57 )
    {
      v68 = v58;
      v69 = std::io::error::Error::kind(&v68);
      <std::io::error::ErrorKind as core::cmp::PartialEq>::eq(&v69, asc_17C46);
      uu_base32::base_common::format_read_error(v70, v69);
      v50 = uucore::mods::error::USimpleError::new(1LL, v70);
      v51 = v29;
      core::ptr::drop_in_place<std::io::error::Error>(&v68);
      goto LABEL_19;
    }
    if ( !v58 )
      break;
    v42 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v53, v58, &off_1297B8);
    v43 = v17;
    *(_QWORD *)v61 = core::slice::<impl [T]>::iter();
    v62 = v18;
    v41 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(
            (int)v61,
            (int)dest,
            v18,
            v61[0],
            v19,
            v20,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
    if ( (v41 & 1) != 0 )
    {
      alloc::vec::Vec<T,A>::clear(v56);
      v63[0] = core::slice::iter::<impl core::iter::traits::collect::IntoIterator for &[T]>::into_iter(v42, v43);
      v63[1] = v21;
      while ( 1 )
      {
        v64 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v63);
        if ( !v64 )
          break;
        if ( (dest[*v64] & 1) != 0 )
          alloc::vec::Vec<T,A>::push(v56, *v64);
      }
      v59 = alloc::vec::Vec<T,A>::as_slice(v56);
      v60 = v22;
    }
    else
    {
      v59 = v42;
      v60 = v43;
    }
    v40 = alloc::vec::Vec<T,A>::len(v54);
    v39 = v48 - v40;
    if ( v48 < v40 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_1297D0);
    if ( v39 > v60 )
    {
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::Extend<&T>>::extend(v54, v59, v60);
      v35 = alloc::vec::Vec<T,A>::len(v54);
      if ( v35 >= v48 )
        core::panicking::panic(aAssertionFaile_1, 66LL, &off_129830);
    }
    else
    {
      v23 = uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(
              a3,
              a4,
              v48,
              v39,
              v59,
              v60,
              (__int64)v55,
              (__int64)v54);
      v25 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v23, v24);
      v65 = v25;
      v66 = v26;
      if ( v25 )
      {
        v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v65,
                v66,
                &off_129818);
        v51 = v28;
        goto LABEL_19;
      }
      if ( alloc::vec::Vec<T,A>::len(v54) >= v48 )
        core::panicking::panic(aAssertionFaile_1, 66LL, &off_1297E8);
      v38 = uu_base32::base_common::fast_decode::write_to_output(v55, &v49, &unk_129738);
      v67 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v38);
      if ( v67 )
      {
        v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v67,
                &off_129800);
        v51 = v27;
        goto LABEL_19;
      }
    }
  }
  v9 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v54);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(a4 + 32))(a3, v9, v10, v55);
  v71 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v11, v12);
  v72 = v13;
  if ( v71 )
  {
    v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v71,
            v72,
            &off_1297A0);
    v51 = v16;
  }
  else
  {
    v45 = uu_base32::base_common::fast_decode::write_to_output(v55, &v49, &unk_129738);
    v44 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v45);
    v73 = v44;
    if ( !v44 )
    {
      v50 = 0LL;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v56);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v55);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v54);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v53);
      return v50;
    }
    v50 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v73,
            &off_129788);
    v51 = v15;
  }
LABEL_19:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v56);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v55);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v54);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v53);
  return v50;
}
