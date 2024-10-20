__int64 __fastcall uu_factor::write_result(__int64 a1, __int64 a2, __int128 *a3, char a4)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  int v25; // [rsp+0h] [rbp-438h]
  int v26; // [rsp+0h] [rbp-438h]
  char v27; // [rsp+8h] [rbp-430h]
  __int64 v28; // [rsp+8h] [rbp-430h]
  int v29; // [rsp+10h] [rbp-428h]
  __int64 v30; // [rsp+10h] [rbp-428h]
  int v31; // [rsp+18h] [rbp-420h]
  int v32; // [rsp+18h] [rbp-420h]
  int v33; // [rsp+20h] [rbp-418h]
  __int64 v34; // [rsp+20h] [rbp-418h]
  int v35; // [rsp+28h] [rbp-410h]
  __int64 v36; // [rsp+28h] [rbp-410h]
  int v37; // [rsp+30h] [rbp-408h]
  int v38; // [rsp+30h] [rbp-408h]
  int v39; // [rsp+38h] [rbp-400h]
  __int64 v40; // [rsp+38h] [rbp-400h]
  int v41; // [rsp+40h] [rbp-3F8h]
  __int64 v42; // [rsp+40h] [rbp-3F8h]
  int v43; // [rsp+48h] [rbp-3F0h]
  int v44; // [rsp+48h] [rbp-3F0h]
  struct _Unwind_Exception *v45; // [rsp+50h] [rbp-3E8h]
  struct _Unwind_Exception *v46; // [rsp+50h] [rbp-3E8h]
  int v47; // [rsp+58h] [rbp-3E0h]
  int v48; // [rsp+58h] [rbp-3E0h]
  __int64 v49; // [rsp+78h] [rbp-3C0h]
  __int64 v50; // [rsp+80h] [rbp-3B8h]
  __int64 v51; // [rsp+98h] [rbp-3A0h]
  __int64 v54; // [rsp+B8h] [rbp-380h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-378h]
  __int64 v56; // [rsp+C8h] [rbp-370h]
  int v57[12]; // [rsp+D0h] [rbp-368h] BYREF
  __int128 v58; // [rsp+100h] [rbp-338h] BYREF
  __int128 v59; // [rsp+118h] [rbp-320h]
  _BYTE src[72]; // [rsp+128h] [rbp-310h] BYREF
  __int128 v61; // [rsp+170h] [rbp-2C8h] BYREF
  __int64 v62; // [rsp+180h] [rbp-2B8h]
  _BYTE dest[72]; // [rsp+190h] [rbp-2A8h] BYREF
  _QWORD v64[4]; // [rsp+1D8h] [rbp-260h] BYREF
  _QWORD v65[3]; // [rsp+1F8h] [rbp-240h] BYREF
  unsigned __int64 v66; // [rsp+210h] [rbp-228h] BYREF
  __int64 v67; // [rsp+218h] [rbp-220h]
  int v68[12]; // [rsp+220h] [rbp-218h] BYREF
  _OWORD v69[2]; // [rsp+250h] [rbp-1E8h] BYREF
  __int128 v70; // [rsp+278h] [rbp-1C0h]
  __int128 v71; // [rsp+288h] [rbp-1B0h]
  __int64 v72; // [rsp+298h] [rbp-1A0h]
  int v73[12]; // [rsp+2A0h] [rbp-198h] BYREF
  __int128 v74; // [rsp+2D0h] [rbp-168h] BYREF
  __int128 v75; // [rsp+2E0h] [rbp-158h]
  __int64 v76; // [rsp+2F0h] [rbp-148h]
  _BYTE v77[24]; // [rsp+2F8h] [rbp-140h] BYREF
  _QWORD v78[3]; // [rsp+310h] [rbp-128h] BYREF
  _QWORD v79[3]; // [rsp+328h] [rbp-110h] BYREF
  _BYTE v80[48]; // [rsp+340h] [rbp-F8h] BYREF
  __int128 v81; // [rsp+370h] [rbp-C8h] BYREF
  __int128 v82; // [rsp+388h] [rbp-B0h]
  __int64 v83; // [rsp+398h] [rbp-A0h]
  int v84[13]; // [rsp+3A0h] [rbp-98h] BYREF
  char v85; // [rsp+3D7h] [rbp-61h]
  _QWORD *v86; // [rsp+3E8h] [rbp-50h]
  __int64 (__fastcall *v87)(); // [rsp+3F0h] [rbp-48h]
  _QWORD *v88; // [rsp+3F8h] [rbp-40h]
  __int64 (__fastcall *v89)(); // [rsp+400h] [rbp-38h]
  _QWORD *v90; // [rsp+408h] [rbp-30h]
  __int64 (__fastcall *v91)(); // [rsp+410h] [rbp-28h]
  unsigned __int64 *v92; // [rsp+418h] [rbp-20h]
  __int64 (__fastcall *v93)(); // [rsp+420h] [rbp-18h]
  __int64 *v94; // [rsp+428h] [rbp-10h]
  __int64 (__fastcall *v95)(); // [rsp+430h] [rbp-8h]

  v54 = a2;
  v85 = 1;
  v94 = &v54;
  v95 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v59 = &v54;
  *((_QWORD *)&v59 + 1) = <&T as core::fmt::Display>::fmt;
  v58 = v59;
  core::fmt::Arguments::new_v1(v57, &unk_17CEF0, &v58);
  v51 = std::io::Write::write_fmt(
          a1,
          (int)v57,
          v4,
          v5,
          v6,
          v7,
          v25,
          v27,
          v29,
          v31,
          v33,
          v35,
          v37,
          v39,
          v41,
          v43,
          v45,
          v47);
  v56 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v51);
  if ( v56 )
  {
    v55 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v56,
            &off_17CFB0);
  }
  else
  {
    v85 = 0;
    v62 = *((_QWORD *)a3 + 2);
    v61 = *a3;
    <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(src, &v61);
    memcpy(dest, src, sizeof(dest));
    while ( 1 )
    {
      <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(v64, dest);
      if ( v64[0] == 0x8000000000000000LL )
        break;
      v65[0] = v64[0];
      v65[1] = v64[1];
      v65[2] = v64[2];
      v66 = v64[3];
      if ( (a4 & 1) != 0 )
      {
        if ( v66 > 1 )
        {
          v86 = v65;
          v87 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
          *(_QWORD *)&v70 = v65;
          *((_QWORD *)&v70 + 1) = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
          v92 = &v66;
          v93 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&v71 = &v66;
          *((_QWORD *)&v71 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v69[0] = v70;
          v69[1] = v71;
          core::fmt::Arguments::new_v1(v68, &off_17CF78, v69);
          v30 = std::io::Write::write_fmt(
                  a1,
                  (int)v68,
                  v21,
                  v22,
                  v23,
                  v24,
                  v26,
                  v28,
                  v30,
                  v32,
                  v34,
                  v36,
                  v38,
                  v40,
                  v42,
                  v44,
                  v46,
                  v48);
          v28 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v30);
          v67 = v28;
          if ( v28 )
          {
            v55 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                    v67,
                    &off_17CF98);
            goto LABEL_20;
          }
        }
        else
        {
          v88 = v65;
          v89 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
          *(_QWORD *)&v75 = v65;
          *((_QWORD *)&v75 + 1) = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
          v74 = v75;
          core::fmt::Arguments::new_v1(v73, &off_17CF38, &v74);
          v36 = std::io::Write::write_fmt(
                  a1,
                  (int)v73,
                  v17,
                  v18,
                  v19,
                  v20,
                  v26,
                  v28,
                  v30,
                  v32,
                  v34,
                  v36,
                  v38,
                  v40,
                  v42,
                  v44,
                  v46,
                  v48);
          v34 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v36);
          v72 = v34;
          if ( v34 )
          {
            v55 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                    v72,
                    &off_17CF60);
            goto LABEL_20;
          }
        }
      }
      else
      {
        v90 = v65;
        v91 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
        *(_QWORD *)&v82 = v65;
        *((_QWORD *)&v82 + 1) = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
        v81 = v82;
        core::fmt::Arguments::new_v1(v80, &off_17CF38, &v81);
        alloc::fmt::format(v79, v80);
        v78[0] = v79[0];
        v78[1] = v79[1];
        v78[2] = v79[2];
        v13 = <alloc::string::String as core::ops::deref::Deref>::deref(v78);
        v48 = v14;
        alloc::str::<impl str>::repeat(v77, v13, v14, v66);
        v15 = alloc::string::String::as_bytes(v77);
        v44 = v16;
        v46 = (struct _Unwind_Exception *)v15;
        v42 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v15, v16);
        v40 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v42);
        v76 = v40;
        if ( v40 )
        {
          v55 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v76,
                  &off_17CF48);
          core::ptr::drop_in_place<alloc::string::String>(v77);
          core::ptr::drop_in_place<alloc::string::String>(v78);
LABEL_20:
          core::ptr::drop_in_place<num_bigint::biguint::BigUint>(v65);
          core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>(dest);
          goto LABEL_12;
        }
        core::ptr::drop_in_place<alloc::string::String>(v77);
        core::ptr::drop_in_place<alloc::string::String>(v78);
      }
      core::ptr::drop_in_place<num_bigint::biguint::BigUint>(v65);
    }
    core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>(dest);
    core::fmt::Arguments::new_const(v84, &off_17CF10);
    v50 = std::io::Write::write_fmt(
            a1,
            (int)v84,
            v8,
            v9,
            v10,
            v11,
            v26,
            v28,
            v30,
            v32,
            v34,
            v36,
            v38,
            v40,
            v42,
            v44,
            v46,
            v48);
    v49 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v50);
    v83 = v49;
    if ( !v49 )
      return <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a1);
    v55 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v83,
            &off_17CF20);
  }
LABEL_12:
  if ( (v85 & 1) != 0 )
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>(a3);
  return v55;
}
