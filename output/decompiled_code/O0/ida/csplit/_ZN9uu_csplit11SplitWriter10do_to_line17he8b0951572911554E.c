        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // [rsp+0h] [rbp-2B8h]
  __int64 v10; // [rsp+8h] [rbp-2B0h]
  char v11; // [rsp+16h] [rbp-2A2h]
  char is_none; // [rsp+17h] [rbp-2A1h]
  char v13; // [rsp+2Fh] [rbp-289h]
  int v17[2]; // [rsp+68h] [rbp-250h] BYREF
  _BYTE dest[40]; // [rsp+70h] [rbp-248h] BYREF
  __int64 src; // [rsp+98h] [rbp-220h] BYREF
  int v20[2]; // [rsp+A0h] [rbp-218h]
  int v21[2]; // [rsp+A8h] [rbp-210h]
  int v22[2]; // [rsp+B0h] [rbp-208h]
  int v23[2]; // [rsp+C0h] [rbp-1F8h] BYREF
  int v24[2]; // [rsp+C8h] [rbp-1F0h]
  int v25[2]; // [rsp+D0h] [rbp-1E8h]
  int v26[2]; // [rsp+D8h] [rbp-1E0h] BYREF
  int v27[4]; // [rsp+E0h] [rbp-1D8h] BYREF
  int v28[2]; // [rsp+F0h] [rbp-1C8h]
  int v29[2]; // [rsp+F8h] [rbp-1C0h] BYREF
  int v30[4]; // [rsp+100h] [rbp-1B8h] BYREF
  int v31[2]; // [rsp+110h] [rbp-1A8h]
  int v32[4]; // [rsp+120h] [rbp-198h] BYREF
  int v33[2]; // [rsp+130h] [rbp-188h]
  int v34[4]; // [rsp+138h] [rbp-180h] BYREF
  int v35[2]; // [rsp+148h] [rbp-170h]
  int v36[4]; // [rsp+150h] [rbp-168h]
  int v37[2]; // [rsp+160h] [rbp-158h]
  char v38; // [rsp+16Fh] [rbp-149h]
  int v39[2]; // [rsp+170h] [rbp-148h] BYREF
  int v40[6]; // [rsp+178h] [rbp-140h] BYREF
  int v41[4]; // [rsp+190h] [rbp-128h] BYREF
  int v42[2]; // [rsp+1A0h] [rbp-118h]
  _BYTE v43[48]; // [rsp+1B0h] [rbp-108h] BYREF
  __int64 v44[5]; // [rsp+1E0h] [rbp-D8h] BYREF
  int v45[6]; // [rsp+208h] [rbp-B0h] BYREF
  int v46[4]; // [rsp+220h] [rbp-98h] BYREF
  __int64 v47; // [rsp+230h] [rbp-88h]
  _BYTE v48[48]; // [rsp+240h] [rbp-78h] BYREF
  __int64 v49[5]; // [rsp+270h] [rbp-48h] BYREF
  __int64 v50; // [rsp+298h] [rbp-20h]
  char v51; // [rsp+2A6h] [rbp-12h]
  char v52; // [rsp+2A7h] [rbp-11h]

  *(_QWORD *)v17 = a5;
  v51 = 0;
  v52 = 0;
  uu_csplit::InputSplitter<I>::rewind_buffer(a6);
  uu_csplit::InputSplitter<I>::set_size_of_buffer(a6, 1LL);
  <str as alloc::string::ToString>::to_string(v23, a3, a4);
  *(_QWORD *)v20 = *(_QWORD *)v23;
  *(_QWORD *)v21 = *(_QWORD *)v24;
  *(_QWORD *)v22 = *(_QWORD *)v25;
  src = 1LL;
  memcpy(dest, &src, sizeof(dest));
  while ( 1 )
  {
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v26, a6);
    v52 = 1;
    if ( *(_QWORD *)v27 == 0x8000000000000001LL )
      goto LABEL_4;
    *(_QWORD *)v29 = *(_QWORD *)v26;
    v52 = 0;
    *(_QWORD *)v31 = *(_QWORD *)v28;
    *(_OWORD *)v30 = *(_OWORD *)v27;
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v34, v30);
    if ( *(_QWORD *)v34 == 0x8000000000000000LL )
    {
      <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
        a1,
        *(_QWORD *)&v34[2],
        &off_2A1FA8);
LABEL_29:
      v51 = 0;
      v52 = 0;
      core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(dest);
      return a1;
    }
    *(_QWORD *)v37 = *(_QWORD *)v35;
    *(_OWORD *)v36 = *(_OWORD *)v34;
    v51 = 1;
    *(_QWORD *)v33 = *(_QWORD *)v35;
    *(_OWORD *)v32 = *(_OWORD *)v34;
    *(_QWORD *)v39 = <&usize as core::ops::arith::Add<usize>>::add(v29, 1LL, &off_2A1F38);
    v13 = core::cmp::impls::<impl core::cmp::Ord for usize>::cmp(v17, v39);
    v38 = v13;
    if ( v13 == -1 )
    {
      v51 = 0;
      *(_QWORD *)v42 = *(_QWORD *)v33;
      *(_OWORD *)v41 = *(_OWORD *)v32;
      uu_csplit::InputSplitter<I>::add_line_to_buffer(v40, a6, *(_QWORD *)v29, v41);
      is_none = core::option::Option<T>::is_none(v40);
      if ( (is_none & 1) == 0 )
      {
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v40);
        core::fmt::Arguments::new_const(v43, &off_2A1F50);
        core::panicking::panic_fmt(v43, &off_2A1F60);
      }
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v40);
      v44[0] = 12LL;
      core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(dest);
      memcpy(dest, v44, sizeof(dest));
      goto LABEL_18;
    }
    if ( !v13 )
      break;
    v6 = <alloc::string::String as core::ops::deref::Deref>::deref(v32);
    v10 = uu_csplit::SplitWriter::writeln(a2, v6, v7);
    v9 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v10);
    v50 = v9;
    if ( v9 )
    {
      <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
        a1,
        v50,
        &off_2A1F90);
      core::ptr::drop_in_place<alloc::string::String>(v32);
      goto LABEL_29;
    }
    core::ptr::drop_in_place<alloc::string::String>(v32);
    v51 = 0;
    v52 = 0;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 32) + 99LL) & 1) == 0 )
  {
    v51 = 0;
    v47 = *(_QWORD *)v33;
    *(_OWORD *)v46 = *(_OWORD *)v32;
    uu_csplit::InputSplitter<I>::add_line_to_buffer(v45, a6, *(_QWORD *)v29, v46);
    v11 = core::option::Option<T>::is_none(v45);
    if ( (v11 & 1) == 0 )
    {
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v45);
      core::fmt::Arguments::new_const(v48, &off_2A1F50);
      core::panicking::panic_fmt(v48, &off_2A1F78);
    }
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v45);
  }
  v49[0] = 12LL;
  core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(dest);
  memcpy(dest, v49, sizeof(dest));
LABEL_18:
  if ( (v51 & 1) != 0 )
    core::ptr::drop_in_place<alloc::string::String>(v32);
  v51 = 0;
LABEL_4:
  if ( *(_QWORD *)v27 != 0x8000000000000001LL && (v52 & 1) != 0 )
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(v27);
  v52 = 0;
  uu_csplit::SplitWriter::finish_split(a2);
  memcpy(a1, dest, 0x28uLL);
  return a1;
}
