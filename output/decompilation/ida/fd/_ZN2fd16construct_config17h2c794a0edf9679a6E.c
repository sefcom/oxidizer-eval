__int64 __fastcall fd::construct_config(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r13
  __int128 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // eax
  char v16; // r13
  __int64 v17; // r14
  unsigned __int8 v18; // al
  int v19; // ecx
  __int64 v20; // r12
  bool v21; // cl
  bool v22; // si
  char v23; // al
  bool v24; // si
  unsigned __int8 v25; // al
  char v26; // di
  bool v27; // zf
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r14
  _QWORD *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  char v38; // r15
  __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // r13
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  char v45; // [rsp+Dh] [rbp-37Bh]
  char v46; // [rsp+Dh] [rbp-37Bh]
  unsigned __int8 v47; // [rsp+Eh] [rbp-37Ah]
  char v48; // [rsp+Eh] [rbp-37Ah]
  char v49; // [rsp+Fh] [rbp-379h]
  char is_terminal; // [rsp+10h] [rbp-378h]
  char v51; // [rsp+11h] [rbp-377h]
  char v52; // [rsp+12h] [rbp-376h]
  char v53; // [rsp+13h] [rbp-375h]
  char v54; // [rsp+14h] [rbp-374h]
  char v55; // [rsp+15h] [rbp-373h]
  char v56; // [rsp+16h] [rbp-372h]
  char v57; // [rsp+17h] [rbp-371h]
  __int64 v58; // [rsp+18h] [rbp-370h]
  unsigned __int8 v59; // [rsp+24h] [rbp-364h]
  __int64 v60; // [rsp+28h] [rbp-360h]
  __int64 v61; // [rsp+30h] [rbp-358h]
  __int64 v62; // [rsp+38h] [rbp-350h]
  __int64 v63; // [rsp+40h] [rbp-348h]
  __int64 v64; // [rsp+40h] [rbp-348h]
  int v65; // [rsp+48h] [rbp-340h]
  char v66; // [rsp+4Ch] [rbp-33Ch]
  bool v67; // [rsp+54h] [rbp-334h]
  bool v68; // [rsp+58h] [rbp-330h]
  char v69; // [rsp+5Ch] [rbp-32Ch]
  _BYTE v70[24]; // [rsp+60h] [rbp-328h] BYREF
  __int128 v71; // [rsp+78h] [rbp-310h] BYREF
  __int64 v72; // [rsp+88h] [rbp-300h]
  int v73; // [rsp+92h] [rbp-2F6h]
  __int16 v74; // [rsp+96h] [rbp-2F2h]
  __int64 v75; // [rsp+98h] [rbp-2F0h]
  __int64 v76; // [rsp+A0h] [rbp-2E8h]
  __int64 v77; // [rsp+A8h] [rbp-2E0h]
  __int64 v78; // [rsp+B0h] [rbp-2D8h]
  __int64 v79; // [rsp+B8h] [rbp-2D0h]
  __int64 v80; // [rsp+C0h] [rbp-2C8h]
  __int64 v81; // [rsp+C8h] [rbp-2C0h]
  __int64 v82; // [rsp+D0h] [rbp-2B8h]
  __int64 v83; // [rsp+D8h] [rbp-2B0h]
  __int64 v84; // [rsp+E0h] [rbp-2A8h]
  __int64 v85; // [rsp+E8h] [rbp-2A0h] BYREF
  _BYTE v86[24]; // [rsp+F0h] [rbp-298h]
  __int64 v87; // [rsp+108h] [rbp-280h]
  unsigned int v88; // [rsp+110h] [rbp-278h] BYREF
  __int64 v89; // [rsp+114h] [rbp-274h]
  unsigned int v90; // [rsp+11Ch] [rbp-26Ch]
  __int128 v91; // [rsp+120h] [rbp-268h]
  __int128 v92; // [rsp+130h] [rbp-258h]
  _OWORD src[10]; // [rsp+140h] [rbp-248h] BYREF
  __int128 v94; // [rsp+1E0h] [rbp-1A8h]
  __int128 v95; // [rsp+1F0h] [rbp-198h]
  __int128 v96; // [rsp+200h] [rbp-188h] BYREF
  _OWORD dest[10]; // [rsp+210h] [rbp-178h] BYREF
  _QWORD v98[26]; // [rsp+2B8h] [rbp-D0h] BYREF

  v4 = (__int64)a2;
  if ( *((_BYTE *)a2 + 487) )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( !*((_BYTE *)a2 + 486) )
    {
      *(_QWORD *)&src[0] = a3;
      *((_QWORD *)&src[0] + 1) = a3 + 24 * a4;
      v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(src);
    }
  }
  *(_QWORD *)&src[1] = *((_QWORD *)a2 + 53);
  src[0] = *(_OWORD *)(a2 + 102);
  *((_QWORD *)a2 + 51) = 0x8000000000000000LL;
  core::option::Option<T>::or_else(&v71, src);
  if ( __OFSUB__(0LL, (_QWORD)v71)
    || (<alloc::string::String as core::clone::Clone>::clone(src, &v71),
        dest[0] = *(_OWORD *)((char *)src + 8),
        *(_QWORD *)&src[0] == 0x8000000000000000LL) )
  {
    LODWORD(v98[0]) = 0;
    v7 = core::char::methods::encode_utf8_raw(47LL, v98);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, v7, v8);
    *(_QWORD *)&v70[16] = *(_QWORD *)&src[1];
    *(_OWORD *)v70 = src[0];
  }
  else
  {
    *(_OWORD *)&v70[8] = dest[0];
    *(_QWORD *)v70 = *(_QWORD *)&src[0];
  }
  v9 = *((_QWORD *)a2 + 11);
  v58 = *((_QWORD *)a2 + 12);
  v10 = *((_QWORD *)a2 + 13);
  *((_QWORD *)a2 + 11) = 0LL;
  *((_QWORD *)a2 + 12) = 8LL;
  *((_QWORD *)a2 + 13) = 0LL;
  v11 = src;
  fd::extract_time_constraints(src, a2);
  v13 = *((_QWORD *)&src[0] + 1);
  v62 = *(_QWORD *)&src[0];
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
  {
    v14 = *(_QWORD *)&src[1];
    v15 = a2[108];
    v61 = *((_QWORD *)&src[0] + 1);
    v84 = *(_QWORD *)&src[1];
    if ( v15 == 3 )
    {
      LODWORD(v96) = 3;
    }
    else
    {
      v88 = v15;
      v89 = *(_QWORD *)(a2 + 109);
      v90 = a2[111];
      v11 = &v96;
      a2 = &v88;
      fd::filter::owner::OwnerFilter::filter_ignore(&v96, &v88);
    }
    v60 = v9;
    std::io::stdio::stdout(v11, a2, v14, v13);
    is_terminal = std::sys::io::is_terminal::isatty::is_terminal();
    if ( *(_BYTE *)(v4 + 501) )
    {
      if ( *(_BYTE *)(v4 + 501) != 1 )
        goto LABEL_22;
    }
    else
    {
      std::env::var_os(src, aNoColor, 8LL);
      if ( *(_QWORD *)&src[0] != 0x8000000000000000LL
        && (v63 = v10,
            v16 = v6,
            v17 = *(_QWORD *)&src[1],
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(*(_QWORD *)&src[0], *((_QWORD *)&src[0] + 1)),
            v27 = v17 == 0,
            v6 = v16,
            v10 = v63,
            !v27)
        || !is_terminal )
      {
LABEL_22:
        v98[0] = 0x8000000000000000LL;
        v18 = 0;
        v19 = *(unsigned __int8 *)(v4 + 502);
        if ( v19 != 2 )
          goto LABEL_23;
        goto LABEL_27;
      }
    }
    lscolors::LsColors::from_env(src);
    if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
      lscolors::LsColors::from_string(dest, aOw0Or038516485, 5775LL);
    else
      memcpy(dest, src, sizeof(dest));
    memcpy(v98, dest, 0xA0uLL);
    v18 = 1;
    v19 = *(unsigned __int8 *)(v4 + 502);
    if ( v19 != 2 )
    {
LABEL_23:
      v59 = v19;
      if ( v19 != 1 )
        v59 = v18;
LABEL_28:
      fd::extract_command(src, v4, v18);
      v20 = *(_QWORD *)&src[0];
      if ( *(_QWORD *)&src[0] == 0x8000000000000001LL )
      {
        *(_QWORD *)(a1 + 8) = *((_QWORD *)&src[0] + 1);
        *(_QWORD *)a1 = 2LL;
        v9 = v60;
        core::ptr::drop_in_place<core::option::Option<lscolors::LsColors>>(v98, v4);
LABEL_30:
        core::ptr::drop_in_place<alloc::vec::Vec<fd::filter::time::TimeFilter>>(v62, v61);
        goto LABEL_31;
      }
      v69 = v6;
      *(_OWORD *)&v86[8] = src[1];
      v47 = *(_QWORD *)&src[0] != 0x8000000000000000LL;
      v21 = *(_BYTE *)(v4 + 505) == 0;
      v27 = *(_BYTE *)(v4 + 480) == 0;
      v85 = *(_QWORD *)&src[0];
      v22 = v21;
      if ( !v27 )
        v22 = 0;
      v68 = v22;
      *(_QWORD *)v86 = *((_QWORD *)&src[0] + 1);
      v23 = *(_BYTE *)(v4 + 481);
      v24 = v21;
      if ( v23 )
        v24 = 0;
      v67 = v24;
      v25 = v23 ^ 1;
      v26 = *(_BYTE *)(v4 + 482) ^ 1;
      v27 = (v21 & v25) == 0;
      if ( (v21 & v25) == 0 )
        v26 = 0;
      v28 = *(_BYTE *)(v4 + 485) ^ 1;
      if ( v27 )
        v28 = 0;
      v66 = v28;
      v29 = *(_QWORD *)(v4 + 32);
      v30 = *(_QWORD *)(v4 + 40);
      v31 = v29;
      v32 = v30;
      if ( *(_BYTE *)v4 )
      {
        v32 = *(_QWORD *)(v4 + 8);
        v31 = 1LL;
      }
      v81 = v31;
      if ( *(_BYTE *)(v4 + 16) )
      {
        v30 = *(_QWORD *)(v4 + 24);
        v29 = 1LL;
      }
      v82 = v29;
      v83 = v30;
      v45 = *(_BYTE *)(v4 + 483);
      v52 = *(_BYTE *)(v4 + 484);
      v51 = *(_BYTE *)(v4 + 494);
      v56 = *(_BYTE *)(v4 + 493);
      v55 = *(_BYTE *)(v4 + 500);
      v54 = *(_BYTE *)(v4 + 495);
      v57 = *(_BYTE *)(v4 + 498);
      v53 = *(_BYTE *)(v4 + 496);
      v80 = fd::cli::Opts::threads(*(_QWORD *)(v4 + 472));
      v79 = *(_QWORD *)(v4 + 448);
      v65 = *(_DWORD *)(v4 + 456);
      v33 = v98;
      memcpy(src, v98, sizeof(src));
      if ( *(_QWORD *)(v4 + 232) == 0x8000000000000000LL )
      {
        v49 = 2;
        if ( *(_QWORD *)(v4 + 256) != 0x8000000000000000LL )
          goto LABEL_46;
      }
      else
      {
        v33 = *(_QWORD **)(v4 + 240);
        fd::construct_config::{{closure}}(dest, v33, *(_QWORD *)(v4 + 248));
        v49 = dest[0];
        v75 = *(_QWORD *)((char *)dest + 1);
        if ( *(_QWORD *)(v4 + 256) != 0x8000000000000000LL )
        {
LABEL_46:
          fd::construct_config::{{closure}}(dest, *(_QWORD *)(v4 + 264), *(_QWORD *)(v4 + 272));
          v35 = *((_QWORD *)&dest[0] + 1);
          v36 = *(_QWORD *)&dest[0];
          v33 = (_QWORD *)*((_QWORD *)&dest[1] + 1);
          v34 = *(_QWORD *)&dest[1];
          if ( !*(_QWORD *)&dest[0] )
          {
            *(_QWORD *)&dest[0] = *((_QWORD *)&dest[0] + 1);
            *(_OWORD *)((char *)dest + 8) = dest[1];
            *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(dest);
            *(_QWORD *)a1 = 2LL;
            v9 = v60;
            core::ptr::drop_in_place<core::option::Option<lscolors::LsColors>>(src, v33);
            core::ptr::drop_in_place<core::option::Option<fd::exec::CommandSet>>(&v85);
            goto LABEL_30;
          }
LABEL_50:
          *(_QWORD *)&v91 = v36;
          *((_QWORD *)&v91 + 1) = v35;
          *(_QWORD *)&v92 = v34;
          *((_QWORD *)&v92 + 1) = v33;
          if ( *(_QWORD *)(v4 + 328) == 0x8000000000000000LL )
          {
            *(_QWORD *)&v94 = 2LL;
            if ( v20 == 0x8000000000000000LL )
            {
LABEL_52:
              v37 = 0LL;
LABEL_55:
              v76 = v37;
              v78 = v32;
              v64 = v10;
              v87 = v37;
              v77 = *(_QWORD *)(v4 + 464);
              core::iter::traits::iterator::Iterator::collect(
                dest,
                *(_QWORD *)(v4 + 72),
                *(_QWORD *)(v4 + 72) + 24LL * *(_QWORD *)(v4 + 80));
              v38 = v45 ^ 1;
              *(_QWORD *)(a1 + 120) = *(_QWORD *)(v4 + 128);
              *(_OWORD *)(a1 + 104) = *(_OWORD *)(v4 + 112);
              *(_QWORD *)(v4 + 112) = 0LL;
              *(_QWORD *)(v4 + 120) = 8LL;
              *(_QWORD *)(v4 + 128) = 0LL;
              *(_OWORD *)(a1 + 384) = v96;
              v46 = *(_BYTE *)(v4 + 499);
              *(_OWORD *)(a1 + 360) = v71;
              *(_QWORD *)(a1 + 376) = v72;
              *(_QWORD *)(a1 + 192) = *(_QWORD *)&v70[16];
              *(_OWORD *)(a1 + 176) = *(_OWORD *)v70;
              v39 = fd::cli::Opts::max_results(v4);
              v41 = v40;
              v48 = fd::cli::Opts::strip_cwd_prefix(v4, *(_BYTE *)(v4 + 495), v47);
              memcpy((void *)(a1 + 200), src, 0xA0uLL);
              v42 = v91;
              *(_OWORD *)(a1 + 440) = v92;
              *(_OWORD *)(a1 + 424) = v42;
              v43 = v95;
              *(_OWORD *)(a1 + 48) = v94;
              *(_OWORD *)(a1 + 64) = v43;
              *(_QWORD *)(a1 + 96) = *(_QWORD *)&dest[1];
              *(_OWORD *)(a1 + 80) = dest[0];
              *(_QWORD *)a1 = v81;
              *(_QWORD *)(a1 + 8) = v78;
              *(_QWORD *)(a1 + 16) = v82;
              *(_QWORD *)(a1 + 24) = v83;
              *(_QWORD *)(a1 + 32) = v39;
              *(_QWORD *)(a1 + 40) = v41;
              *(_QWORD *)(a1 + 128) = v60;
              *(_QWORD *)(a1 + 136) = v58;
              *(_QWORD *)(a1 + 144) = v64;
              *(_QWORD *)(a1 + 152) = v62;
              *(_QWORD *)(a1 + 160) = v61;
              *(_QWORD *)(a1 + 168) = v84;
              *(_QWORD *)(a1 + 400) = v79;
              *(_DWORD *)(a1 + 408) = v65;
              *(_QWORD *)(a1 + 416) = v80;
              *(_QWORD *)(a1 + 456) = v76;
              *(_QWORD *)(a1 + 464) = v77;
              *(_BYTE *)(a1 + 472) = v69;
              *(_BYTE *)(a1 + 473) = v51;
              *(_BYTE *)(a1 + 474) = v68;
              *(_BYTE *)(a1 + 475) = v67;
              *(_BYTE *)(a1 + 476) = v52 ^ 1;
              *(_BYTE *)(a1 + 477) = v26;
              *(_BYTE *)(a1 + 478) = v38;
              *(_BYTE *)(a1 + 479) = v66;
              *(_BYTE *)(a1 + 480) = v56;
              *(_BYTE *)(a1 + 481) = v55;
              *(_BYTE *)(a1 + 482) = v54;
              *(_BYTE *)(a1 + 483) = v53;
              *(_BYTE *)(a1 + 484) = v57;
              *(_BYTE *)(a1 + 485) = is_terminal;
              *(_BYTE *)(a1 + 486) = v46;
              *(_BYTE *)(a1 + 487) = v48;
              *(_BYTE *)(a1 + 488) = v59;
              *(_BYTE *)(a1 + 489) = v49;
              *(_QWORD *)(a1 + 490) = v75;
              *(_WORD *)(a1 + 502) = v74;
              *(_DWORD *)(a1 + 498) = v73;
              return core::ptr::drop_in_place<fd::cli::Opts>(v4);
            }
          }
          else
          {
            fd::fmt::FormatTemplate::parse((__int64)dest, *(_QWORD *)(v4 + 336), *(_QWORD *)(v4 + 344));
            v95 = dest[1];
            v94 = dest[0];
            if ( v20 == 0x8000000000000000LL )
              goto LABEL_52;
          }
          *((_QWORD *)&dest[2] + 1) = *(_QWORD *)&v86[16];
          *(_OWORD *)((char *)&dest[1] + 8) = *(_OWORD *)v86;
          *(_QWORD *)&dest[0] = 1LL;
          *((_QWORD *)&dest[0] + 1) = 1LL;
          *(_QWORD *)&dest[1] = v20;
          v37 = alloc::boxed::Box<T>::new(dest);
          goto LABEL_55;
        }
      }
      v36 = 0LL;
      goto LABEL_50;
    }
LABEL_27:
    v59 = 0;
    goto LABEL_28;
  }
  *(_QWORD *)(a1 + 8) = *((_QWORD *)&src[0] + 1);
  *(_QWORD *)a1 = 2LL;
LABEL_31:
  core::ptr::drop_in_place<alloc::vec::Vec<crossbeam_channel::flavors::array::Slot<fd::walk::Batch>>>(v9, v58, v12, v13);
  core::ptr::drop_in_place<alloc::string::String>(v70);
  core::ptr::drop_in_place<regex::error::Error>(&v71);
  return core::ptr::drop_in_place<fd::cli::Opts>(v4);
}