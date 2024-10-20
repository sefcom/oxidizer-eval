_QWORD *__fastcall uu_head::arg_iterate(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  struct _Unwind_Exception *v6; // rdx
  int v7; // r8d
  int v8; // r9d
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v17; // [rsp+0h] [rbp-588h]
  int v18; // [rsp+0h] [rbp-588h]
  int v19; // [rsp+8h] [rbp-580h]
  int v20; // [rsp+8h] [rbp-580h]
  _QWORD *v21; // [rsp+8h] [rbp-580h]
  int v22; // [rsp+10h] [rbp-578h]
  int v23; // [rsp+10h] [rbp-578h]
  int v24; // [rsp+18h] [rbp-570h]
  int v25; // [rsp+18h] [rbp-570h]
  int v26; // [rsp+20h] [rbp-568h]
  int v27; // [rsp+20h] [rbp-568h]
  int v28; // [rsp+28h] [rbp-560h]
  int v29; // [rsp+28h] [rbp-560h]
  int v30; // [rsp+30h] [rbp-558h]
  int v31; // [rsp+30h] [rbp-558h]
  int v32; // [rsp+38h] [rbp-550h]
  int v33; // [rsp+38h] [rbp-550h]
  int v34; // [rsp+40h] [rbp-548h]
  int v35; // [rsp+40h] [rbp-548h]
  int v36; // [rsp+48h] [rbp-540h]
  int v37; // [rsp+48h] [rbp-540h]
  int v38; // [rsp+50h] [rbp-538h]
  int v39; // [rsp+50h] [rbp-538h]
  void *v40; // [rsp+50h] [rbp-538h]
  int v41; // [rsp+58h] [rbp-530h]
  int v42; // [rsp+58h] [rbp-530h]
  int v43; // [rsp+60h] [rbp-528h]
  int v44; // [rsp+60h] [rbp-528h]
  int v45; // [rsp+68h] [rbp-520h]
  int v46[2]; // [rsp+68h] [rbp-520h]
  int v47; // [rsp+68h] [rbp-520h]
  int dest; // [rsp+70h] [rbp-518h]
  void *desta; // [rsp+70h] [rbp-518h]
  int destb; // [rsp+70h] [rbp-518h]
  int v51; // [rsp+78h] [rbp-510h]
  int v52; // [rsp+78h] [rbp-510h]
  struct _Unwind_Exception *v53; // [rsp+80h] [rbp-508h]
  int v54; // [rsp+80h] [rbp-508h]
  int v55; // [rsp+88h] [rbp-500h]
  int v56[2]; // [rsp+88h] [rbp-500h]
  int v57; // [rsp+88h] [rbp-500h]
  int v58[2]; // [rsp+90h] [rbp-4F8h]
  int v59; // [rsp+90h] [rbp-4F8h]
  int v60[2]; // [rsp+98h] [rbp-4F0h]
  int v61; // [rsp+98h] [rbp-4F0h]
  struct _Unwind_Exception *v62; // [rsp+A0h] [rbp-4E8h]
  int v63; // [rsp+A0h] [rbp-4E8h]
  int v64; // [rsp+A8h] [rbp-4E0h]
  int v65; // [rsp+A8h] [rbp-4E0h]
  int v66; // [rsp+B0h] [rbp-4D8h]
  __int64 v67; // [rsp+B0h] [rbp-4D8h]
  int v68; // [rsp+B8h] [rbp-4D0h]
  struct _Unwind_Exception *v69; // [rsp+C0h] [rbp-4C8h]
  _QWORD *v70; // [rsp+C8h] [rbp-4C0h]
  int v71[2]; // [rsp+D8h] [rbp-4B0h] BYREF
  int v72[2]; // [rsp+E0h] [rbp-4A8h]
  __int128 v73; // [rsp+E8h] [rbp-4A0h] BYREF
  __int64 v74; // [rsp+F8h] [rbp-490h]
  __int128 v75; // [rsp+100h] [rbp-488h] BYREF
  __int64 v76; // [rsp+110h] [rbp-478h]
  __int128 v77; // [rsp+118h] [rbp-470h] BYREF
  __int64 v78; // [rsp+128h] [rbp-460h]
  __int128 v79; // [rsp+130h] [rbp-458h] BYREF
  __int64 v80; // [rsp+140h] [rbp-448h]
  int v81[2]; // [rsp+148h] [rbp-440h]
  int v82[2]; // [rsp+150h] [rbp-438h]
  __int64 v83; // [rsp+158h] [rbp-430h] BYREF
  __int128 v84; // [rsp+160h] [rbp-428h]
  __int128 v85; // [rsp+170h] [rbp-418h]
  __int128 v86; // [rsp+180h] [rbp-408h]
  __int128 v87; // [rsp+190h] [rbp-3F8h]
  int v88[22]; // [rsp+1A8h] [rbp-3E0h] BYREF
  int v89[16]; // [rsp+200h] [rbp-388h] BYREF
  int v90[8]; // [rsp+240h] [rbp-348h] BYREF
  _BYTE v91[24]; // [rsp+260h] [rbp-328h] BYREF
  __int128 v92; // [rsp+278h] [rbp-310h]
  __int64 v93; // [rsp+288h] [rbp-300h]
  int v94[4]; // [rsp+290h] [rbp-2F8h] BYREF
  __int128 v95; // [rsp+2A0h] [rbp-2E8h]
  char v96; // [rsp+2BFh] [rbp-2C9h]
  _QWORD v97[3]; // [rsp+2C0h] [rbp-2C8h] BYREF
  _QWORD v98[3]; // [rsp+2D8h] [rbp-2B0h] BYREF
  _BYTE v99[48]; // [rsp+2F0h] [rbp-298h] BYREF
  __int128 v100; // [rsp+320h] [rbp-268h] BYREF
  __int128 v101; // [rsp+330h] [rbp-258h]
  _BYTE v102[32]; // [rsp+340h] [rbp-248h] BYREF
  _QWORD v103[3]; // [rsp+360h] [rbp-228h] BYREF
  _QWORD v104[3]; // [rsp+378h] [rbp-210h] BYREF
  _BYTE v105[48]; // [rsp+390h] [rbp-1F8h] BYREF
  __int128 v106; // [rsp+3C0h] [rbp-1C8h] BYREF
  __int128 v107; // [rsp+3D0h] [rbp-1B8h]
  _BYTE v108[32]; // [rsp+3E0h] [rbp-1A8h] BYREF
  _BYTE src[48]; // [rsp+400h] [rbp-188h] BYREF
  int v110[8]; // [rsp+430h] [rbp-158h] BYREF
  _BYTE v111[24]; // [rsp+450h] [rbp-138h] BYREF
  __int128 v112; // [rsp+468h] [rbp-120h]
  __int64 v113; // [rsp+478h] [rbp-110h]
  __int128 v114; // [rsp+480h] [rbp-108h]
  __int64 v115; // [rsp+490h] [rbp-F8h]
  _BYTE v116[24]; // [rsp+498h] [rbp-F0h] BYREF
  _QWORD v117[4]; // [rsp+4B0h] [rbp-D8h] BYREF
  _BYTE v118[24]; // [rsp+4D0h] [rbp-B8h] BYREF
  __int128 v119; // [rsp+4E8h] [rbp-A0h]
  __int64 v120; // [rsp+4F8h] [rbp-90h]
  __int128 v121; // [rsp+500h] [rbp-88h]
  __int128 v122; // [rsp+510h] [rbp-78h]
  char v123; // [rsp+523h] [rbp-65h]
  char v124; // [rsp+524h] [rbp-64h]
  char v125; // [rsp+525h] [rbp-63h]
  char v126; // [rsp+526h] [rbp-62h]
  char v127; // [rsp+527h] [rbp-61h]
  _BYTE *v128; // [rsp+538h] [rbp-50h]
  __int64 (__fastcall *v129)(); // [rsp+540h] [rbp-48h]
  _BYTE *v130; // [rsp+548h] [rbp-40h]
  __int64 (__fastcall *v131)(); // [rsp+550h] [rbp-38h]

  *(_QWORD *)v71 = a2;
  *(_QWORD *)v72 = a3;
  v124 = 0;
  v123 = 0;
  v127 = 0;
  v125 = 0;
  v126 = 1;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v75, v71);
  if ( (_QWORD)v75 == 0x8000000000000000LL )
    core::option::unwrap_failed(&off_115160);
  v73 = v75;
  v74 = v76;
  v124 = 1;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v77, v71);
  v125 = 1;
  if ( (_QWORD)v77 != 0x8000000000000000LL )
  {
    v125 = 0;
    v123 = 1;
    v80 = v78;
    v79 = v77;
    v3 = <std::ffi::os_str::OsString as core::ops::deref::Deref>::deref(&v79);
    v68 = v4;
    v69 = (struct _Unwind_Exception *)v3;
    v5 = std::ffi::os_str::OsStr::to_str(v3, v4);
    v62 = v6;
    v64 = v5;
    *(_QWORD *)v81 = v5;
    *(_QWORD *)v82 = v6;
    if ( v5 != 0 )
    {
      *(_QWORD *)v58 = *(_QWORD *)v81;
      *(_QWORD *)v60 = *(_QWORD *)v82;
      uu_head::parse::parse_obsolete(&v83);
      if ( v83 )
      {
        if ( (_QWORD)v84 )
        {
          v122 = v85;
          v121 = v84;
          v127 = 1;
          v87 = v85;
          v86 = v84;
          *(_QWORD *)v46 = alloc::alloc::exchange_malloc(24LL, 8LL);
          v124 = 0;
          v92 = v73;
          v93 = v74;
          if ( (v46[0] & 7) != 0 )
            core::panicking::panic_misaligned_pointer_dereference(8LL, *(_QWORD *)v46, &off_1151C8);
          *(_QWORD *)(*(_QWORD *)v46 + 16LL) = v93;
          **(_OWORD **)v46 = v92;
          alloc::slice::<impl [T]>::into_vec(v91, *(_QWORD *)v46, 1LL);
          <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v90, v91);
          v127 = 0;
          v95 = v87;
          *(_OWORD *)v94 = v86;
          core::iter::traits::iterator::Iterator::chain(
            (int)v89,
            (int)v90,
            (int)v94,
            v9,
            v10,
            v11,
            v17,
            v19,
            v22,
            v24,
            v26,
            v28,
            v30,
            v32,
            v34,
            v36,
            v38,
            v41,
            v43,
            v46[0],
            dest,
            v51,
            (int)v53,
            v55,
            v58[0],
            v60[0],
            v62,
            v64);
          v126 = 0;
          core::iter::traits::iterator::Iterator::chain(
            (int)v88,
            (int)v89,
            v71[0],
            v72[0],
            v12,
            v13,
            v18,
            v20,
            v23,
            v25,
            v27,
            v29,
            v31,
            v33,
            v35,
            v37,
            v39,
            v42,
            v44,
            v47,
            destb,
            v52,
            v54,
            v57,
            v59,
            v61,
            v63,
            v65,
            v66,
            v68,
            v69,
            (int)a1);
          v40 = (void *)alloc::alloc::exchange_malloc(88LL, 8LL);
          memcpy(v40, v88, 0x58uLL);
          v70[1] = v40;
          v70[2] = &off_1151E0;
          *v70 = 0LL;
          v127 = 0;
        }
        else
        {
          v96 = BYTE8(v84) & 1;
          if ( (BYTE8(v84) & 1) != 0 )
          {
            <str as os_display::native::Quotable>::quote(v108, *(_QWORD *)v58, *(_QWORD *)v60);
            v128 = v108;
            v129 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v107 = v108;
            *((_QWORD *)&v107 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            v106 = v107;
            core::fmt::Arguments::new_v1(v105, &off_115228, &v106);
            alloc::fmt::format(v104, v105);
            v103[0] = v104[0];
            v103[1] = v104[1];
            v103[2] = v104[2];
            a1[1] = uucore::mods::error::USimpleError::new(1LL, v103);
          }
          else
          {
            <str as os_display::native::Quotable>::quote(v102, *(_QWORD *)v58, *(_QWORD *)v60);
            v130 = v102;
            v131 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v101 = v102;
            *((_QWORD *)&v101 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            v100 = v101;
            core::fmt::Arguments::new_v1(v99, &off_115218, &v100);
            alloc::fmt::format(v98, v99);
            v97[0] = v98[0];
            v97[1] = v98[1];
            v97[2] = v98[2];
            a1[1] = uucore::mods::error::USimpleError::new(1LL, v97);
          }
          a1[2] = v14;
          *a1 = 1LL;
        }
      }
      else
      {
        *(_QWORD *)v56 = alloc::alloc::exchange_malloc(48LL, 8LL);
        v124 = 0;
        v112 = v73;
        v113 = v74;
        v123 = 0;
        v114 = v79;
        v115 = v80;
        if ( (v56[0] & 7) != 0 )
          core::panicking::panic_misaligned_pointer_dereference(8LL, *(_QWORD *)v56, &off_115178);
        *(_QWORD *)(*(_QWORD *)v56 + 16LL) = v113;
        **(_OWORD **)v56 = v112;
        *(_QWORD *)(*(_QWORD *)v56 + 40LL) = v115;
        *(_OWORD *)(*(_QWORD *)v56 + 24LL) = v114;
        alloc::slice::<impl [T]>::into_vec(v111, *(_QWORD *)v56, 2LL);
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v110, v111);
        v126 = 0;
        core::iter::traits::iterator::Iterator::chain(
          (int)src,
          (int)v110,
          v71[0],
          v72[0],
          v7,
          v8,
          v17,
          v19,
          v22,
          v24,
          v26,
          v28,
          v30,
          v32,
          v34,
          v36,
          v38,
          v41,
          v43,
          v45,
          dest,
          v51,
          v53,
          v56[0]);
        desta = (void *)alloc::alloc::exchange_malloc(48LL, 8LL);
        memcpy(desta, src, 0x30uLL);
        a1[1] = desta;
        a1[2] = &off_115190;
        *a1 = 0LL;
      }
    }
    else
    {
      alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(v116, aBadArgumentEnc, 21LL);
      a1[1] = uucore::mods::error::USimpleError::new(1LL, v116);
      a1[2] = v15;
      *a1 = 1LL;
    }
    if ( (v123 & 1) != 0 )
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v79);
    v123 = 0;
  }
  else
  {
    v67 = alloc::alloc::exchange_malloc(24LL, 8LL);
    v124 = 0;
    v119 = v73;
    v120 = v74;
    if ( (v67 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v67, &off_115248);
    *(_QWORD *)(v67 + 16) = v120;
    *(_OWORD *)v67 = v119;
    alloc::slice::<impl [T]>::into_vec(v118, v67, 1LL);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v117, v118);
    v21 = (_QWORD *)alloc::alloc::exchange_malloc(32LL, 8LL);
    *v21 = v117[0];
    v21[1] = v117[1];
    v21[2] = v117[2];
    v21[3] = v117[3];
    a1[1] = v21;
    a1[2] = &off_115260;
    *a1 = 0LL;
  }
  if ( (v124 & 1) != 0 )
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v73);
  v124 = 0;
  if ( (_QWORD)v77 != 0x8000000000000000LL && (v125 & 1) != 0 )
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v77);
  return a1;
}
