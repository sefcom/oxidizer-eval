__int64 __fastcall uu_shuf::shuf_exec(__int64 a1, __int128 *a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rdx
  const char *v9; // rsi
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // edx
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  struct _Unwind_Exception *v50; // [rsp+0h] [rbp-4A8h]
  int v51; // [rsp+8h] [rbp-4A0h]
  int v52; // [rsp+10h] [rbp-498h]
  int v53; // [rsp+18h] [rbp-490h]
  int v54; // [rsp+20h] [rbp-488h]
  int v55; // [rsp+28h] [rbp-480h]
  int v56; // [rsp+30h] [rbp-478h]
  int v57; // [rsp+38h] [rbp-470h]
  int v58; // [rsp+40h] [rbp-468h]
  __int64 v59; // [rsp+48h] [rbp-460h]
  struct _Unwind_Exception *v60; // [rsp+50h] [rbp-458h]
  int v61; // [rsp+58h] [rbp-450h]
  int v62; // [rsp+60h] [rbp-448h]
  int v63; // [rsp+68h] [rbp-440h]
  __int64 v64; // [rsp+70h] [rbp-438h]
  int v65; // [rsp+78h] [rbp-430h]
  int v66; // [rsp+80h] [rbp-428h]
  int v67; // [rsp+80h] [rbp-428h]
  int v68; // [rsp+88h] [rbp-420h]
  int v69; // [rsp+88h] [rbp-420h]
  int v70; // [rsp+90h] [rbp-418h]
  int v71; // [rsp+98h] [rbp-410h]
  int v72; // [rsp+A0h] [rbp-408h]
  int v73; // [rsp+A0h] [rbp-408h]
  int v74; // [rsp+A8h] [rbp-400h]
  int v75; // [rsp+A8h] [rbp-400h]
  struct _Unwind_Exception *v76; // [rsp+B0h] [rbp-3F8h]
  int v77; // [rsp+B8h] [rbp-3F0h]
  __int64 v78; // [rsp+F0h] [rbp-3B8h]
  __int64 v79; // [rsp+118h] [rbp-390h]
  char is_empty; // [rsp+137h] [rbp-371h]
  _DWORD *v81; // [rsp+188h] [rbp-320h]
  __int64 *v82; // [rsp+190h] [rbp-318h]
  __int64 v83; // [rsp+1B8h] [rbp-2F0h]
  __int64 v85; // [rsp+1D0h] [rbp-2D8h]
  int v86[12]; // [rsp+1E0h] [rbp-2C8h] BYREF
  int v87[2]; // [rsp+210h] [rbp-298h]
  int v88[2]; // [rsp+218h] [rbp-290h]
  __int128 v89; // [rsp+220h] [rbp-288h] BYREF
  __int64 v90; // [rsp+230h] [rbp-278h]
  int v91; // [rsp+23Ch] [rbp-26Ch]
  __int64 v92; // [rsp+240h] [rbp-268h] BYREF
  __int64 v93; // [rsp+248h] [rbp-260h]
  _BYTE v94[16]; // [rsp+250h] [rbp-258h] BYREF
  int v95[4]; // [rsp+260h] [rbp-248h] BYREF
  _DWORD v96[2]; // [rsp+270h] [rbp-238h] BYREF
  __int64 v97; // [rsp+278h] [rbp-230h]
  __int128 v98; // [rsp+280h] [rbp-228h] BYREF
  __int64 v99; // [rsp+290h] [rbp-218h]
  int v100; // [rsp+2A4h] [rbp-204h]
  __int64 v101; // [rsp+2A8h] [rbp-200h] BYREF
  __int64 v102; // [rsp+2B0h] [rbp-1F8h]
  _BYTE v103[16]; // [rsp+2B8h] [rbp-1F0h] BYREF
  _BYTE v104[16]; // [rsp+2C8h] [rbp-1E0h] BYREF
  _QWORD v105[4]; // [rsp+2D8h] [rbp-1D0h] BYREF
  int v106[2]; // [rsp+2F8h] [rbp-1B0h] BYREF
  __int64 v107; // [rsp+300h] [rbp-1A8h]
  __int64 v108; // [rsp+308h] [rbp-1A0h]
  __int64 v109; // [rsp+310h] [rbp-198h]
  __int64 v110; // [rsp+318h] [rbp-190h]
  char v111; // [rsp+327h] [rbp-181h] BYREF
  _BYTE v112[88]; // [rsp+328h] [rbp-180h] BYREF
  _BYTE src[88]; // [rsp+380h] [rbp-128h] BYREF
  _BYTE dest[88]; // [rsp+3D8h] [rbp-D0h] BYREF
  __int64 v115; // [rsp+430h] [rbp-78h]
  __int64 v116; // [rsp+438h] [rbp-70h]
  int v117[2]; // [rsp+440h] [rbp-68h] BYREF
  __int64 v118; // [rsp+448h] [rbp-60h]
  __int64 v119; // [rsp+450h] [rbp-58h]
  __int64 v120; // [rsp+458h] [rbp-50h]
  __int64 v121; // [rsp+460h] [rbp-48h]
  char v122; // [rsp+46Ch] [rbp-3Ch] BYREF
  char v123; // [rsp+46Dh] [rbp-3Bh]
  char v124; // [rsp+46Eh] [rbp-3Ah]
  char v125; // [rsp+46Fh] [rbp-39h]
  int v126; // [rsp+484h] [rbp-24h]

  v125 = 0;
  v124 = 0;
  v123 = 1;
  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    v83 = std::io::stdio::stdout();
    v82 = (__int64 *)alloc::alloc::exchange_malloc(8LL, 8LL);
    *v82 = v83;
    *(_QWORD *)v87 = v82;
    *(_QWORD *)v88 = &unk_11F778;
LABEL_4:
    std::io::buffered::bufwriter::BufWriter<W>::new((int)v86, v87[0], v88[0]);
    if ( *((_QWORD *)a2 + 3) == 0x8000000000000000LL )
    {
      v97 = rand::rngs::thread::thread_rng();
      v96[0] = 1;
    }
    else
    {
      v123 = 0;
      v99 = *((_QWORD *)a2 + 5);
      v98 = *(__int128 *)((char *)a2 + 24);
      v7 = <alloc::string::String as core::ops::index::Index<I>>::index(&v98, &off_11F830);
      std::fs::File::open(v104, v7, v8);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        v103,
        v104,
        &v98);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v101, v103);
      if ( v101 )
      {
        LODWORD(v9) = v102;
        v85 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v101,
                v102,
                &off_11F8A8);
        v124 = 0;
        core::ptr::drop_in_place<alloc::string::String>(&v98);
LABEL_39:
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(
          (int)v86,
          (int)v9,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        goto LABEL_40;
      }
      v100 = v102;
      v124 = 0;
      v96[1] = uu_shuf::rand_read_adapter::ReadRng<R>::new((unsigned int)v102);
      v96[0] = 0;
      v124 = 0;
      core::ptr::drop_in_place<alloc::string::String>(&v98);
    }
    if ( (*((_BYTE *)a2 + 56) & 1) != 0 )
    {
      is_empty = <core::ops::range::RangeInclusive<usize> as uu_shuf::Shufable>::is_empty(a1);
      if ( (is_empty & 1) != 0 )
      {
        v9 = aNoLinesToRepea;
        v85 = uucore::mods::error::USimpleError::new(1LL, aNoLinesToRepea, 18LL);
      }
      else
      {
        v10 = (_BYTE *)*((_QWORD *)a2 + 6);
        v23 = <I as core::iter::traits::collect::IntoIterator>::into_iter(0LL, v10);
        v73 = v24;
        v75 = v23;
        v105[0] = v23;
        v105[1] = v24;
        do
        {
          v25 = core::iter::range::<impl core::iter::traits::iterator::Iterator for core::ops::range::Range<A>>::next(v105);
          v67 = v26;
          v69 = v25;
          v105[2] = v25;
          v105[3] = v26;
          if ( !v25 )
          {
LABEL_20:
            v85 = 0LL;
            core::ptr::drop_in_place<uu_shuf::WrappedRng>(v96);
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(
              (int)v86,
              (int)v10,
              v27,
              v28,
              v29,
              v30,
              v50,
              v51);
            return v85;
          }
          *(_QWORD *)v106 = <core::ops::range::RangeInclusive<usize> as uu_shuf::Shufable>::choose(a1, v96);
          v64 = <usize as uu_shuf::Writable>::write_all_to(
                  (int)v106,
                  (int)v86,
                  v32,
                  v33,
                  v34,
                  v35,
                  (int)v50,
                  v51,
                  v52,
                  v53,
                  v54,
                  v55,
                  v56,
                  v57,
                  v58,
                  v59,
                  (int)v60,
                  v61,
                  v62,
                  v63,
                  v64,
                  v106[0],
                  v67,
                  v69,
                  v70,
                  v71,
                  v73,
                  v75,
                  v76,
                  v77);
          v36 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v64);
          v62 = v37;
          v63 = v36;
          v38 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v36, v37);
          LODWORD(v60) = v39;
          v61 = v38;
          v107 = v38;
          v108 = v39;
          if ( v38 )
          {
            LODWORD(v9) = v108;
            v85 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                    v107,
                    v108,
                    &off_11F890);
            goto LABEL_27;
          }
          v111 = *((_BYTE *)a2 + 57);
          v59 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v86, &v111, 1LL);
          v40 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v59);
          LOBYTE(v55) = v41;
          v56 = v40;
          LODWORD(v10) = v41;
          v42 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v40, v41);
          v53 = v43;
          v54 = v42;
          v109 = v42;
          v110 = v43;
        }
        while ( !v42 );
        LODWORD(v9) = v110;
        v44 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v109,
                v110,
                &off_11F878);
        v51 = v45;
        v85 = v44;
      }
    }
    else
    {
      <core::ops::range::RangeInclusive<usize> as uu_shuf::Shufable>::partial_shuffle(
        v112,
        a1,
        v96,
        *((_QWORD *)a2 + 6));
      <I as core::iter::traits::collect::IntoIterator>::into_iter(src, v112);
      v10 = src;
      memcpy(dest, src, sizeof(dest));
      do
      {
        v12 = <uu_shuf::NonrepeatingIterator as core::iter::traits::iterator::Iterator>::next(dest);
        v115 = v12;
        v116 = v11;
        if ( !v12 )
        {
          core::ptr::drop_in_place<uu_shuf::NonrepeatingIterator>(dest);
          goto LABEL_20;
        }
        *(_QWORD *)v117 = v116;
        v79 = <usize as uu_shuf::Writable>::write_all_to(
                (int)v117,
                (int)v86,
                v11,
                v12,
                v13,
                v14,
                (int)v50,
                v51,
                v52,
                v53,
                v54,
                v55,
                v56,
                v57,
                v58,
                v59,
                (int)v60,
                v61,
                v62,
                v63,
                v64,
                v65,
                v66,
                v68,
                v70,
                v71,
                v72,
                v74,
                v76,
                v77);
        v15 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v79);
        v17 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v15, v16);
        v118 = v17;
        v119 = v18;
        if ( v17 )
        {
          LODWORD(v9) = v119;
          v85 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v118,
                  v119,
                  &off_11F860);
          goto LABEL_26;
        }
        v122 = *((_BYTE *)a2 + 57);
        v78 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v86, &v122, 1LL);
        v19 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v78);
        LODWORD(v10) = v20;
        v21 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v19, v20);
        v120 = v21;
        v121 = v22;
      }
      while ( !v21 );
      LODWORD(v9) = v121;
      v85 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v120,
              v121,
              &off_11F848);
LABEL_26:
      core::ptr::drop_in_place<uu_shuf::NonrepeatingIterator>(dest);
    }
LABEL_27:
    core::ptr::drop_in_place<uu_shuf::WrappedRng>(v96);
    goto LABEL_39;
  }
  v90 = *((_QWORD *)a2 + 2);
  v89 = *a2;
  v2 = <alloc::string::String as core::ops::index::Index<I>>::index(&v89, &off_11F7C8);
  std::fs::File::create((int)v95, v2, v3, v4, v5, v6, (int)v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v94,
    v95,
    &v89);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v92, v94);
  if ( !v92 )
  {
    v91 = v93;
    v125 = 0;
    v126 = v93;
    v81 = (_DWORD *)alloc::alloc::exchange_malloc(4LL, 4LL);
    *v81 = v126;
    v125 = 0;
    *(_QWORD *)v87 = v81;
    *(_QWORD *)v88 = &off_11F7E0;
    core::ptr::drop_in_place<alloc::string::String>(&v89);
    goto LABEL_4;
  }
  v85 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          v92,
          v93,
          &off_11F8C0);
  v125 = 0;
  core::ptr::drop_in_place<alloc::string::String>(&v89);
LABEL_40:
  if ( *((_QWORD *)a2 + 3) != 0x8000000000000000LL && (v123 & 1) != 0 )
    core::ptr::drop_in_place<alloc::string::String>((char *)a2 + 24);
  return v85;
}
