_QWORD *__fastcall uu_csplit::do_csplit(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // [rsp+0h] [rbp-428h]
  int v13; // [rsp+8h] [rbp-420h]
  int v14; // [rsp+10h] [rbp-418h]
  char v15; // [rsp+18h] [rbp-410h]
  int v16[2]; // [rsp+20h] [rbp-408h]
  int v17[2]; // [rsp+28h] [rbp-400h]
  int v18[2]; // [rsp+30h] [rbp-3F8h]
  int v19[2]; // [rsp+38h] [rbp-3F0h]
  int v20[2]; // [rsp+40h] [rbp-3E8h]
  int v21; // [rsp+48h] [rbp-3E0h]
  int v22; // [rsp+50h] [rbp-3D8h]
  int v23; // [rsp+58h] [rbp-3D0h]
  int v24; // [rsp+60h] [rbp-3C8h]
  char v25[8]; // [rsp+68h] [rbp-3C0h]
  int v26[2]; // [rsp+70h] [rbp-3B8h]
  int v27[2]; // [rsp+78h] [rbp-3B0h]
  int v28[2]; // [rsp+80h] [rbp-3A8h]
  int v29; // [rsp+88h] [rbp-3A0h]
  struct _Unwind_Exception *v30; // [rsp+90h] [rbp-398h]
  int v31; // [rsp+98h] [rbp-390h]
  int v33[2]; // [rsp+C8h] [rbp-360h] BYREF
  int v34[2]; // [rsp+D0h] [rbp-358h]
  int v35[2]; // [rsp+D8h] [rbp-350h]
  int v36[2]; // [rsp+E0h] [rbp-348h]
  int v37[2]; // [rsp+E8h] [rbp-340h] BYREF
  int v38[2]; // [rsp+F0h] [rbp-338h]
  int v39[2]; // [rsp+F8h] [rbp-330h]
  int v40[2]; // [rsp+100h] [rbp-328h]
  int v41[4]; // [rsp+108h] [rbp-320h] BYREF
  int v42[4]; // [rsp+118h] [rbp-310h]
  int v43[4]; // [rsp+128h] [rbp-300h]
  char v44[8]; // [rsp+138h] [rbp-2F0h]
  int v45[4]; // [rsp+140h] [rbp-2E8h] BYREF
  int v46[4]; // [rsp+150h] [rbp-2D8h]
  int v47[4]; // [rsp+160h] [rbp-2C8h]
  char v48[8]; // [rsp+170h] [rbp-2B8h]
  int v49[6]; // [rsp+180h] [rbp-2A8h] BYREF
  int v50[2]; // [rsp+198h] [rbp-290h] BYREF
  int v51[2]; // [rsp+1A0h] [rbp-288h]
  int v52[2]; // [rsp+1A8h] [rbp-280h]
  int v53[2]; // [rsp+1B0h] [rbp-278h] BYREF
  int v54[2]; // [rsp+1B8h] [rbp-270h]
  int v55[2]; // [rsp+1C0h] [rbp-268h]
  _BYTE v56[24]; // [rsp+1C8h] [rbp-260h] BYREF
  int v57[2]; // [rsp+1E0h] [rbp-248h] BYREF
  int v58[2]; // [rsp+1E8h] [rbp-240h]
  int v59[2]; // [rsp+1F0h] [rbp-238h]
  __int64 v60; // [rsp+1F8h] [rbp-230h] BYREF
  int v61[2]; // [rsp+208h] [rbp-220h]
  int v62[2]; // [rsp+210h] [rbp-218h]
  _QWORD src[5]; // [rsp+218h] [rbp-210h] BYREF
  _QWORD v64[5]; // [rsp+240h] [rbp-1E8h] BYREF
  _QWORD v65[3]; // [rsp+268h] [rbp-1C0h] BYREF
  _BYTE dest[40]; // [rsp+280h] [rbp-1A8h] BYREF
  int v67[2]; // [rsp+2A8h] [rbp-180h] BYREF
  int v68[2]; // [rsp+2B0h] [rbp-178h]
  int v69[2]; // [rsp+2B8h] [rbp-170h]
  int v70[2]; // [rsp+2C0h] [rbp-168h]
  int v71; // [rsp+2CCh] [rbp-15Ch]
  int v72[2]; // [rsp+2D0h] [rbp-158h] BYREF
  int v73[2]; // [rsp+2D8h] [rbp-150h]
  int v74[2]; // [rsp+2E0h] [rbp-148h] BYREF
  int v75[2]; // [rsp+2E8h] [rbp-140h]
  int v76[2]; // [rsp+2F0h] [rbp-138h]
  _BYTE v77[24]; // [rsp+2F8h] [rbp-130h] BYREF
  int v78[2]; // [rsp+310h] [rbp-118h] BYREF
  int v79[2]; // [rsp+318h] [rbp-110h]
  int v80[2]; // [rsp+320h] [rbp-108h]
  int v81[2]; // [rsp+328h] [rbp-100h] BYREF
  int v82[2]; // [rsp+330h] [rbp-F8h]
  int v83[2]; // [rsp+338h] [rbp-F0h]
  int v84[2]; // [rsp+340h] [rbp-E8h]
  _QWORD v85[5]; // [rsp+348h] [rbp-E0h] BYREF
  __int64 v86; // [rsp+370h] [rbp-B8h]
  __int64 v87; // [rsp+378h] [rbp-B0h]
  _QWORD v88[5]; // [rsp+380h] [rbp-A8h] BYREF
  _QWORD v89[5]; // [rsp+3A8h] [rbp-80h] BYREF
  _QWORD v90[3]; // [rsp+3D0h] [rbp-58h] BYREF
  _BYTE v91[44]; // [rsp+3E8h] [rbp-40h] BYREF
  char v92; // [rsp+414h] [rbp-14h]
  char v93; // [rsp+415h] [rbp-13h]
  char v94; // [rsp+416h] [rbp-12h]
  char v95; // [rsp+417h] [rbp-11h]

  v95 = 0;
  v93 = 0;
  v94 = 0;
  v92 = 0;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v33, a3);
  *(_QWORD *)v37 = *(_QWORD *)v33;
  *(_QWORD *)v38 = *(_QWORD *)v34;
  *(_QWORD *)v39 = *(_QWORD *)v35;
  *(_QWORD *)v40 = *(_QWORD *)v36;
LABEL_2:
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v41, v37);
  if ( v41[0] != 3 )
  {
    v94 = 1;
    v95 = 1;
    *(_QWORD *)v48 = *(_QWORD *)v44;
    *(_OWORD *)v47 = *(_OWORD *)v43;
    *(_OWORD *)v46 = *(_OWORD *)v42;
    *(_OWORD *)v45 = *(_OWORD *)v41;
    <T as alloc::string::ToString>::to_string(
      (int)v49,
      (int)v45,
      v4,
      0,
      v5,
      v6,
      v12,
      v13,
      v14,
      v15,
      v16[0],
      v17[0],
      v18[0],
      v19[0],
      v20[0],
      v21,
      v22,
      v23,
      v24,
      *(int *)v25,
      v26[0],
      v27[0],
      v28[0],
      v29,
      v30,
      v31);
    v29 = v45[0];
    HIBYTE(v30) = v45[0] == 2LL;
    if ( !v45[0] )
    {
      *(_QWORD *)v28 = *(_QWORD *)&v45[2];
      *(_QWORD *)v50 = *(_QWORD *)v46;
      *(_QWORD *)v51 = *(_QWORD *)&v46[2];
      *(_QWORD *)v52 = *(_QWORD *)&v45[2];
      uu_csplit::patterns::ExecutePattern::iter(v56, v50);
      <I as core::iter::traits::collect::IntoIterator>::into_iter(v53, v56);
      *(_QWORD *)v57 = *(_QWORD *)v53;
      *(_QWORD *)v58 = *(_QWORD *)v54;
      *(_QWORD *)v59 = *(_QWORD *)v55;
      while ( 1 )
      {
        <uu_csplit::patterns::ExecutePatternIter as core::iter::traits::iterator::Iterator>::next(&v60, v57);
        if ( v60 == 2 )
        {
LABEL_12:
          core::ptr::drop_in_place<alloc::string::String>(v49);
          v94 = 0;
          v95 = 0;
          goto LABEL_2;
        }
        *(_QWORD *)v26 = *(_QWORD *)v61;
        *(_QWORD *)v27 = uu_csplit::SplitWriter::new_writer(a2);
        *(_QWORD *)v25 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(*(_QWORD *)v27);
        *(_QWORD *)v62 = *(_QWORD *)v25;
        if ( *(_QWORD *)v25 )
        {
          <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            a1,
            *(_QWORD *)v62,
            &off_2A2410);
          goto LABEL_31;
        }
        v8 = <alloc::string::String as core::ops::deref::Deref>::deref(v49);
        v23 = v9;
        v24 = v8;
        uu_csplit::SplitWriter::do_to_line(src, a2, v8, v9, *(__int64 *)v52, a4);
        v93 = 1;
        if ( src[0] != 12LL )
          break;
        v93 = 0;
        v22 = v52[0] + v28[0];
        if ( __CFADD__(*(_QWORD *)v52, *(_QWORD *)v28) )
          core::panicking::panic_const::panic_const_add_overflow(&off_2A23E0);
        *(_QWORD *)v52 += *(_QWORD *)v28;
      }
      if ( src[0] == 1LL && *(_QWORD *)v26 != 1LL )
      {
        <alloc::string::String as alloc::string::ToString>::to_string(v65, v49);
        if ( !*(_QWORD *)v26 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_2A23F8);
        v64[2] = v65[0];
        v64[3] = v65[1];
        v64[4] = v65[2];
        v64[1] = *(_QWORD *)v26 - 1LL;
        v64[0] = 2LL;
        memcpy(a1, v64, 0x28uLL);
      }
      else
      {
        v93 = 0;
        memcpy(dest, src, sizeof(dest));
        memcpy(a1, dest, 0x28uLL);
      }
      if ( src[0] != 12LL && (v93 & 1) != 0 )
        core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(src);
      v93 = 0;
      goto LABEL_31;
    }
    if ( v45[0] == 1LL )
      v94 = 0;
    else
      v95 = 0;
    *(_QWORD *)v67 = *(_QWORD *)&v45[2];
    *(_QWORD *)v68 = *(_QWORD *)v46;
    *(_QWORD *)v69 = *(_QWORD *)&v46[2];
    *(_QWORD *)v70 = *(_QWORD *)v47;
    v71 = v45[1];
    *(_QWORD *)v72 = *(_QWORD *)&v47[2];
    *(_QWORD *)v73 = *(_QWORD *)v48;
    uu_csplit::patterns::ExecutePattern::iter(v77, v72);
    <I as core::iter::traits::collect::IntoIterator>::into_iter(v74, v77);
    *(_QWORD *)v78 = *(_QWORD *)v74;
    *(_QWORD *)v79 = *(_QWORD *)v75;
    *(_QWORD *)v80 = *(_QWORD *)v76;
    while ( 1 )
    {
      <uu_csplit::patterns::ExecutePatternIter as core::iter::traits::iterator::Iterator>::next(v81, v78);
      if ( *(_QWORD *)v81 == 2LL )
      {
        core::ptr::drop_in_place<regex::regex::string::Regex>(v67);
        goto LABEL_12;
      }
      *(_QWORD *)v18 = *(_QWORD *)v81;
      *(_QWORD *)v19 = *(_QWORD *)v82;
      *(_QWORD *)v20 = *(_QWORD *)v83;
      if ( (HIBYTE(v30) & 1) != 0 )
      {
        uu_csplit::SplitWriter::as_dev_null(a2);
      }
      else
      {
        *(_QWORD *)v17 = uu_csplit::SplitWriter::new_writer(a2);
        *(_QWORD *)v16 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(*(_QWORD *)v17);
        *(_QWORD *)v84 = *(_QWORD *)v16;
        if ( *(_QWORD *)v16 )
        {
          <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            a1,
            *(_QWORD *)v84,
            &off_2A2428);
          goto LABEL_41;
        }
      }
      v10 = <alloc::string::String as core::ops::deref::Deref>::deref(v49);
      v14 = v11;
      v15 = v10;
      uu_csplit::SplitWriter::do_to_match(v88, a2, v10, v11, (__int64)v67, v71, a4);
      v92 = 1;
      memcpy(v85, v88, sizeof(v85));
      v86 = *(_QWORD *)v18;
      v87 = *(_QWORD *)v19;
      if ( v85[0] != 12LL )
        break;
      v92 = 0;
    }
    if ( v86 )
    {
      if ( v85[0] != 3LL || v87 == 1 || *(_QWORD *)v20 == 1LL )
        goto LABEL_50;
      <alloc::string::String as alloc::string::ToString>::to_string(v90, v49);
      if ( !*(_QWORD *)v20 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_2A2440);
      v89[2] = v90[0];
      v89[3] = v90[1];
      v89[4] = v90[2];
      v89[1] = *(_QWORD *)v20 - 1LL;
      v89[0] = 4LL;
      memcpy(a1, v89, 0x28uLL);
    }
    else
    {
      if ( v85[0] != 3LL )
      {
LABEL_50:
        v92 = 0;
        memcpy(v91, v85, 0x28uLL);
        memcpy(a1, v91, 0x28uLL);
        goto LABEL_51;
      }
      *a1 = 12LL;
    }
LABEL_51:
    if ( v85[0] != 12LL && (v92 & 1) != 0 )
      core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(v85);
    v92 = 0;
LABEL_41:
    core::ptr::drop_in_place<regex::regex::string::Regex>(v67);
LABEL_31:
    core::ptr::drop_in_place<alloc::string::String>(v49);
    v94 = 0;
    v95 = 0;
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(v37);
    return a1;
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(v37);
  *a1 = 12LL;
  return a1;
}
