__int64 __fastcall uu_csplit::csplit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rax
  char v7; // dl
  struct _Unwind_Exception *v8; // rsi
  __m256i *v9; // rsi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // ecx
  __int128 v22; // xmm0
  struct _Unwind_Exception *v24; // [rsp+0h] [rbp-468h]
  struct _Unwind_Exception *v25; // [rsp+0h] [rbp-468h]
  struct _Unwind_Exception *v26; // [rsp+0h] [rbp-468h]
  __int64 v27; // [rsp+8h] [rbp-460h]
  int v28; // [rsp+8h] [rbp-460h]
  int v29; // [rsp+8h] [rbp-460h]
  __int64 v30; // [rsp+10h] [rbp-458h]
  __int64 v31; // [rsp+18h] [rbp-450h]
  __int64 v32; // [rsp+20h] [rbp-448h]
  __int64 v33; // [rsp+38h] [rbp-430h]
  __int64 v34; // [rsp+40h] [rbp-428h]
  __int64 v35; // [rsp+58h] [rbp-410h]
  __int64 v36; // [rsp+60h] [rbp-408h]
  char is_err; // [rsp+6Eh] [rbp-3FAh]
  char is_ok; // [rsp+6Fh] [rbp-3F9h]
  struct _Unwind_Exception v42; // [rsp+A8h] [rbp-3C0h] BYREF
  __int128 v43; // [rsp+C8h] [rbp-3A0h]
  __int128 v44; // [rsp+D8h] [rbp-390h]
  __int128 v45; // [rsp+E8h] [rbp-380h] BYREF
  int v46[16]; // [rsp+100h] [rbp-368h] BYREF
  char v47[16]; // [rsp+140h] [rbp-328h]
  int v48[2]; // [rsp+150h] [rbp-318h]
  __m256i v49; // [rsp+160h] [rbp-308h] BYREF
  __int64 v50; // [rsp+180h] [rbp-2E8h]
  _BYTE v51[40]; // [rsp+188h] [rbp-2E0h] BYREF
  __m256i v52; // [rsp+1B0h] [rbp-2B8h] BYREF
  __int64 v53; // [rsp+1D0h] [rbp-298h]
  char v54[16]; // [rsp+1E0h] [rbp-288h]
  int v55[2]; // [rsp+1F0h] [rbp-278h]
  int v56[4]; // [rsp+1F8h] [rbp-270h] BYREF
  __int128 v57; // [rsp+208h] [rbp-260h]
  int v58[2]; // [rsp+218h] [rbp-250h]
  int v59[4]; // [rsp+220h] [rbp-248h] BYREF
  int v60[2]; // [rsp+230h] [rbp-238h]
  _BYTE v61[8]; // [rsp+240h] [rbp-228h] BYREF
  __int128 v62; // [rsp+248h] [rbp-220h] BYREF
  __int64 v63; // [rsp+258h] [rbp-210h]
  __int128 v64; // [rsp+260h] [rbp-208h] BYREF
  __int64 v65; // [rsp+270h] [rbp-1F8h]
  __int64 v66; // [rsp+280h] [rbp-1E8h]
  __int64 v67; // [rsp+288h] [rbp-1E0h]
  __int128 v68; // [rsp+290h] [rbp-1D8h] BYREF
  __int64 v69; // [rsp+2A0h] [rbp-1C8h]
  __int128 v70; // [rsp+2A8h] [rbp-1C0h] BYREF
  __int64 v71; // [rsp+2B8h] [rbp-1B0h]
  __int128 v72; // [rsp+2C0h] [rbp-1A8h] BYREF
  __int64 v73; // [rsp+2D0h] [rbp-198h]
  __int128 v74; // [rsp+2E0h] [rbp-188h]
  __int64 v75; // [rsp+2F0h] [rbp-178h]
  _BYTE src[64]; // [rsp+300h] [rbp-168h] BYREF
  struct _Unwind_Exception v77; // [rsp+340h] [rbp-128h] BYREF
  __int128 v78; // [rsp+360h] [rbp-108h]
  __int128 v79; // [rsp+370h] [rbp-F8h]
  struct _Unwind_Exception dest[2]; // [rsp+380h] [rbp-E8h] BYREF
  _BYTE v81[8]; // [rsp+3C0h] [rbp-A8h] BYREF
  __int128 v82; // [rsp+3C8h] [rbp-A0h]
  __int64 v83; // [rsp+3D8h] [rbp-90h]
  __int128 v84; // [rsp+3E0h] [rbp-88h] BYREF
  __int64 v85; // [rsp+3F0h] [rbp-78h]
  __int64 v86; // [rsp+3F8h] [rbp-70h]
  __int128 v87; // [rsp+400h] [rbp-68h] BYREF
  __int64 v88; // [rsp+410h] [rbp-58h]
  __int128 v89; // [rsp+418h] [rbp-50h] BYREF
  __int64 v90; // [rsp+428h] [rbp-40h]
  __int128 v91; // [rsp+430h] [rbp-38h]
  __int64 v92; // [rsp+440h] [rbp-28h]
  __int64 v93; // [rsp+448h] [rbp-20h]
  char v94; // [rsp+454h] [rbp-14h]
  char v95; // [rsp+455h] [rbp-13h]
  char v96; // [rsp+456h] [rbp-12h]
  char v97; // [rsp+457h] [rbp-11h]

  v95 = 0;
  v97 = 0;
  v96 = 0;
  v94 = 0;
  v6 = std::io::BufRead::lines(a5, a6 & 1);
  core::iter::traits::iterator::Iterator::enumerate(&v45, v6, v7 & 1);
  uu_csplit::InputSplitter<I>::new((__int64)&v42, &v45);
  v95 = 1;
  uu_csplit::SplitWriter::new(v46, a2);
  uu_csplit::patterns::get_patterns(v51, a3, a4);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v49, v51);
  if ( v49.m256i_i64[0] != 12 )
  {
    v53 = v50;
    v52 = v49;
    v9 = &v52;
    <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
      a1,
      &v52,
      &off_2A2258);
    goto LABEL_40;
  }
  *(_QWORD *)v55 = v49.m256i_i64[3];
  *(_OWORD *)v54 = *(_OWORD *)&v49.m256i_u64[1];
  *(_QWORD *)v48 = v49.m256i_i64[3];
  *(_OWORD *)v47 = *(_OWORD *)&v49.m256i_u64[1];
  v97 = 0;
  *(_QWORD *)v60 = v49.m256i_i64[3];
  *(_OWORD *)v59 = *(_OWORD *)&v49.m256i_u64[1];
  v8 = (struct _Unwind_Exception *)v46;
  uu_csplit::do_csplit(v56, v46, v59, &v42);
  is_ok = core::result::Result<T,E>::is_ok(v56);
  if ( (is_ok & 1) != 0 )
  {
    uu_csplit::InputSplitter<I>::rewind_buffer((__int64)&v42);
    v8 = &v42;
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v61, &v42);
    v94 = 1;
    if ( (_QWORD)v62 != 0x8000000000000001LL )
    {
      v94 = 0;
      v96 = 1;
      v65 = v63;
      v64 = v62;
      v36 = uu_csplit::SplitWriter::new_writer(v46);
      v35 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v36);
      v66 = v35;
      if ( v35 )
      {
        LODWORD(v9) = v66;
        <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          a1,
          v66,
          &off_2A2228);
      }
      else
      {
        v96 = 0;
        v73 = v65;
        v72 = v64;
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v70, &v72);
        if ( (_QWORD)v70 == 0x8000000000000000LL )
        {
          LODWORD(v9) = DWORD2(v70);
          <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            a1,
            *((_QWORD *)&v70 + 1),
            &off_2A2210);
        }
        else
        {
          v75 = v71;
          v74 = v70;
          v69 = v71;
          v68 = v70;
          v17 = <alloc::string::String as core::ops::deref::Deref>::deref(&v68);
          v34 = uu_csplit::SplitWriter::writeln(v46, v17, v18);
          v33 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v34);
          v67 = v33;
          if ( v33 )
          {
            LODWORD(v9) = v67;
            <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              a1,
              v67,
              &off_2A21F8);
            core::ptr::drop_in_place<alloc::string::String>(&v68);
          }
          else
          {
            core::ptr::drop_in_place<alloc::string::String>(&v68);
            v95 = 0;
            v79 = v44;
            v78 = v43;
            v77 = v42;
            <I as core::iter::traits::collect::IntoIterator>::into_iter(src, &v77);
            memcpy(dest, src, sizeof(dest));
            while ( 1 )
            {
              v8 = dest;
              <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v81, dest);
              if ( (_QWORD)v82 == 0x8000000000000001LL )
              {
                core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(
                  dest,
                  v24,
                  v27);
                uu_csplit::SplitWriter::finish_split(v46);
                v96 = 0;
                goto LABEL_8;
              }
              v85 = v83;
              v84 = v82;
              <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v89, &v84);
              if ( (_QWORD)v89 == 0x8000000000000000LL )
              {
                LODWORD(v9) = DWORD2(v89);
                <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  a1,
                  *((_QWORD *)&v89 + 1),
                  &off_2A21E0);
                goto LABEL_27;
              }
              v92 = v90;
              v91 = v89;
              v88 = v90;
              v87 = v89;
              v19 = <alloc::string::String as core::ops::deref::Deref>::deref(&v87);
              v32 = uu_csplit::SplitWriter::writeln(v46, v19, v20);
              v31 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v32);
              v86 = v31;
              if ( v31 )
                break;
              core::ptr::drop_in_place<alloc::string::String>(&v87);
            }
            LODWORD(v9) = v86;
            <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              a1,
              v86,
              &off_2A21C8);
            core::ptr::drop_in_place<alloc::string::String>(&v87);
LABEL_27:
            core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(
              dest,
              v24,
              v27);
          }
        }
      }
      if ( (v96 & 1) != 0 )
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v64);
      v96 = 0;
      v94 = 0;
      goto LABEL_31;
    }
LABEL_8:
    if ( (_QWORD)v62 != 0x8000000000000001LL && (v94 & 1) != 0 )
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v62);
    v94 = 0;
  }
  is_err = core::result::Result<T,E>::is_err(v56);
  if ( (is_err & 1) != 0 && (*(_BYTE *)(a2 + 96) & 1) == 0 )
  {
    v30 = uu_csplit::SplitWriter::delete_all_splits(v46);
    v27 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v30);
    v93 = v27;
    v14 = v27;
    if ( v27 )
    {
      LODWORD(v9) = v93;
      <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
        a1,
        v93,
        &off_2A2240);
LABEL_31:
      core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v56);
LABEL_40:
      v97 = 0;
      core::ptr::drop_in_place<uu_csplit::SplitWriter>((int)v46, (int)v9, v10, v11, v12, v13, v24, v27);
      if ( (v95 & 1) != 0 )
        core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(
          &v42,
          v26,
          v29);
      v95 = 0;
      return a1;
    }
  }
  v21 = v58[0];
  *(_QWORD *)(a1 + 32) = *(_QWORD *)v58;
  v22 = *(_OWORD *)v56;
  *(_OWORD *)(a1 + 16) = v57;
  *(_OWORD *)a1 = v22;
  v97 = 0;
  core::ptr::drop_in_place<uu_csplit::SplitWriter>((int)v46, (int)v8, v14, v21, v15, v16, v24, v27);
  if ( (v95 & 1) != 0 )
    core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(
      &v42,
      v25,
      v28);
  v95 = 0;
  return a1;
}
