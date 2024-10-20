__int64 __fastcall uu_csplit::csplit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _Unwind_Exception *v5; // rsi
  __m256i *v6; // rsi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  __int128 v19; // xmm0
  struct _Unwind_Exception *v21; // [rsp+0h] [rbp-538h]
  struct _Unwind_Exception *v22; // [rsp+0h] [rbp-538h]
  struct _Unwind_Exception *v23; // [rsp+0h] [rbp-538h]
  __int64 v24; // [rsp+8h] [rbp-530h]
  int v25; // [rsp+8h] [rbp-530h]
  int v26; // [rsp+8h] [rbp-530h]
  __int64 v27; // [rsp+10h] [rbp-528h]
  __int64 v28; // [rsp+18h] [rbp-520h]
  __int64 v29; // [rsp+30h] [rbp-508h]
  __int64 v30; // [rsp+38h] [rbp-500h]
  __int64 v31; // [rsp+50h] [rbp-4E8h]
  __int64 v32; // [rsp+58h] [rbp-4E0h]
  char is_err; // [rsp+66h] [rbp-4D2h]
  char is_ok; // [rsp+67h] [rbp-4D1h]
  struct _Unwind_Exception v38; // [rsp+A8h] [rbp-490h] BYREF
  __int128 v39; // [rsp+C8h] [rbp-470h]
  __int128 v40; // [rsp+D8h] [rbp-460h]
  __int128 v41; // [rsp+E8h] [rbp-450h]
  __int128 v42; // [rsp+F8h] [rbp-440h]
  __int128 v43[3]; // [rsp+108h] [rbp-430h] BYREF
  __int64 v44[6]; // [rsp+140h] [rbp-3F8h] BYREF
  int v45[16]; // [rsp+170h] [rbp-3C8h] BYREF
  int v46[4]; // [rsp+1B0h] [rbp-388h]
  char v47[8]; // [rsp+1C0h] [rbp-378h]
  __m256i v48; // [rsp+1D0h] [rbp-368h] BYREF
  __int64 v49; // [rsp+1F0h] [rbp-348h]
  _BYTE v50[40]; // [rsp+1F8h] [rbp-340h] BYREF
  __m256i v51; // [rsp+220h] [rbp-318h] BYREF
  __int64 v52; // [rsp+240h] [rbp-2F8h]
  int v53[4]; // [rsp+250h] [rbp-2E8h]
  char v54[8]; // [rsp+260h] [rbp-2D8h]
  int v55[4]; // [rsp+268h] [rbp-2D0h] BYREF
  __int128 v56; // [rsp+278h] [rbp-2C0h]
  int v57[2]; // [rsp+288h] [rbp-2B0h]
  int v58[4]; // [rsp+290h] [rbp-2A8h] BYREF
  char v59[8]; // [rsp+2A0h] [rbp-298h]
  _BYTE v60[8]; // [rsp+2B0h] [rbp-288h] BYREF
  __int128 v61; // [rsp+2B8h] [rbp-280h] BYREF
  __int64 v62; // [rsp+2C8h] [rbp-270h]
  __int128 v63; // [rsp+2D0h] [rbp-268h] BYREF
  __int64 v64; // [rsp+2E0h] [rbp-258h]
  __int64 v65; // [rsp+2F0h] [rbp-248h]
  __int64 v66; // [rsp+2F8h] [rbp-240h]
  __int128 v67; // [rsp+300h] [rbp-238h] BYREF
  __int64 v68; // [rsp+310h] [rbp-228h]
  __int128 v69; // [rsp+318h] [rbp-220h] BYREF
  __int64 v70; // [rsp+328h] [rbp-210h]
  __int128 v71; // [rsp+330h] [rbp-208h] BYREF
  __int64 v72; // [rsp+340h] [rbp-1F8h]
  __int128 v73; // [rsp+350h] [rbp-1E8h]
  __int64 v74; // [rsp+360h] [rbp-1D8h]
  _BYTE src[96]; // [rsp+370h] [rbp-1C8h] BYREF
  struct _Unwind_Exception v76; // [rsp+3D0h] [rbp-168h] BYREF
  __int128 v77; // [rsp+3F0h] [rbp-148h]
  __int128 v78; // [rsp+400h] [rbp-138h]
  __int128 v79; // [rsp+410h] [rbp-128h]
  __int128 v80; // [rsp+420h] [rbp-118h]
  struct _Unwind_Exception dest[3]; // [rsp+430h] [rbp-108h] BYREF
  _BYTE v82[8]; // [rsp+490h] [rbp-A8h] BYREF
  __int128 v83; // [rsp+498h] [rbp-A0h]
  __int64 v84; // [rsp+4A8h] [rbp-90h]
  __int128 v85; // [rsp+4B0h] [rbp-88h] BYREF
  __int64 v86; // [rsp+4C0h] [rbp-78h]
  __int64 v87; // [rsp+4C8h] [rbp-70h]
  __int128 v88; // [rsp+4D0h] [rbp-68h] BYREF
  __int64 v89; // [rsp+4E0h] [rbp-58h]
  __int128 v90; // [rsp+4E8h] [rbp-50h] BYREF
  __int64 v91; // [rsp+4F8h] [rbp-40h]
  __int128 v92; // [rsp+500h] [rbp-38h]
  __int64 v93; // [rsp+510h] [rbp-28h]
  struct _Unwind_Exception *v94; // [rsp+518h] [rbp-20h]
  char v95; // [rsp+524h] [rbp-14h]
  char v96; // [rsp+525h] [rbp-13h]
  char v97; // [rsp+526h] [rbp-12h]
  char v98; // [rsp+527h] [rbp-11h]

  v96 = 0;
  v98 = 0;
  v97 = 0;
  v95 = 0;
  std::io::BufRead::lines(v44, a5);
  core::iter::traits::iterator::Iterator::enumerate(v43, v44);
  uu_csplit::InputSplitter<I>::new((__int64)&v38, v43);
  v96 = 1;
  uu_csplit::SplitWriter::new(v45, a2);
  uu_csplit::patterns::get_patterns(v50, a3, a4);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v48, v50);
  if ( v48.m256i_i64[0] != 12 )
  {
    v52 = v49;
    v51 = v48;
    v6 = &v51;
    <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
      a1,
      &v51,
      &off_2A2258);
    goto LABEL_40;
  }
  *(_QWORD *)v54 = v48.m256i_i64[3];
  *(_OWORD *)v53 = *(_OWORD *)&v48.m256i_u64[1];
  *(_QWORD *)v47 = v48.m256i_i64[3];
  *(_OWORD *)v46 = *(_OWORD *)&v48.m256i_u64[1];
  v98 = 0;
  *(_QWORD *)v59 = v48.m256i_i64[3];
  *(_OWORD *)v58 = *(_OWORD *)&v48.m256i_u64[1];
  v5 = (struct _Unwind_Exception *)v45;
  uu_csplit::do_csplit(v55, v45, v58, &v38);
  is_ok = core::result::Result<T,E>::is_ok(v55);
  if ( (is_ok & 1) != 0 )
  {
    uu_csplit::InputSplitter<I>::rewind_buffer((__int64)&v38);
    v5 = &v38;
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v60, &v38);
    v95 = 1;
    if ( (_QWORD)v61 != 0x8000000000000001LL )
    {
      v95 = 0;
      v97 = 1;
      v64 = v62;
      v63 = v61;
      v32 = uu_csplit::SplitWriter::new_writer(v45);
      v31 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v32);
      v65 = v31;
      if ( v31 )
      {
        LODWORD(v6) = v65;
        <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          a1,
          v65,
          &off_2A2228);
      }
      else
      {
        v97 = 0;
        v72 = v64;
        v71 = v63;
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v69, &v71);
        if ( (_QWORD)v69 == 0x8000000000000000LL )
        {
          LODWORD(v6) = DWORD2(v69);
          <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            a1,
            *((_QWORD *)&v69 + 1),
            &off_2A2210);
        }
        else
        {
          v74 = v70;
          v73 = v69;
          v68 = v70;
          v67 = v69;
          v14 = <alloc::string::String as core::ops::deref::Deref>::deref(&v67);
          v30 = uu_csplit::SplitWriter::writeln(v45, v14, v15);
          v29 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v30);
          v66 = v29;
          if ( v29 )
          {
            LODWORD(v6) = v66;
            <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              a1,
              v66,
              &off_2A21F8);
            core::ptr::drop_in_place<alloc::string::String>(&v67);
          }
          else
          {
            core::ptr::drop_in_place<alloc::string::String>(&v67);
            v96 = 0;
            v80 = v42;
            v79 = v41;
            v78 = v40;
            v77 = v39;
            v76 = v38;
            <I as core::iter::traits::collect::IntoIterator>::into_iter(src, &v76);
            memcpy(dest, src, sizeof(dest));
            while ( 1 )
            {
              v5 = dest;
              <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v82, dest);
              if ( (_QWORD)v83 == 0x8000000000000001LL )
              {
                core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>(
                  dest,
                  v21,
                  v24);
                uu_csplit::SplitWriter::finish_split(v45);
                v97 = 0;
                goto LABEL_8;
              }
              v86 = v84;
              v85 = v83;
              <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v90, &v85);
              if ( (_QWORD)v90 == 0x8000000000000000LL )
              {
                LODWORD(v6) = DWORD2(v90);
                <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  a1,
                  *((_QWORD *)&v90 + 1),
                  &off_2A21E0);
                goto LABEL_27;
              }
              v93 = v91;
              v92 = v90;
              v89 = v91;
              v88 = v90;
              v16 = <alloc::string::String as core::ops::deref::Deref>::deref(&v88);
              v28 = uu_csplit::SplitWriter::writeln(v45, v16, v17);
              v27 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v28);
              v87 = v27;
              if ( v27 )
                break;
              core::ptr::drop_in_place<alloc::string::String>(&v88);
            }
            LODWORD(v6) = v87;
            <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              a1,
              v87,
              &off_2A21C8);
            core::ptr::drop_in_place<alloc::string::String>(&v88);
LABEL_27:
            core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>(
              dest,
              v21,
              v24);
          }
        }
      }
      if ( (v97 & 1) != 0 )
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v63);
      v97 = 0;
      v95 = 0;
      goto LABEL_31;
    }
LABEL_8:
    if ( (_QWORD)v61 != 0x8000000000000001LL && (v95 & 1) != 0 )
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v61);
    v95 = 0;
  }
  is_err = core::result::Result<T,E>::is_err(v55);
  if ( (is_err & 1) != 0 && (*(_BYTE *)(a2 + 96) & 1) == 0 )
  {
    v24 = uu_csplit::SplitWriter::delete_all_splits(v45);
    v21 = (struct _Unwind_Exception *)<core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v24);
    v94 = v21;
    v11 = (int)v21;
    if ( v21 )
    {
      LODWORD(v6) = (_DWORD)v94;
      <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
        a1,
        v94,
        &off_2A2240);
LABEL_31:
      core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v55);
LABEL_40:
      v98 = 0;
      core::ptr::drop_in_place<uu_csplit::SplitWriter>((int)v45, (int)v6, v7, v8, v9, v10, v21, v24);
      if ( (v96 & 1) != 0 )
        core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>(
          &v38,
          v23,
          v26);
      v96 = 0;
      return a1;
    }
  }
  v18 = v57[0];
  *(_QWORD *)(a1 + 32) = *(_QWORD *)v57;
  v19 = *(_OWORD *)v55;
  *(_OWORD *)(a1 + 16) = v56;
  *(_OWORD *)a1 = v19;
  v98 = 0;
  core::ptr::drop_in_place<uu_csplit::SplitWriter>((int)v45, (int)v5, v11, v18, v12, v13, v21, v24);
  if ( (v96 & 1) != 0 )
    core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>(
      &v38,
      v22,
      v25);
  v96 = 0;
  return a1;
}
