__int64 __fastcall uu_ls::enter_directory(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  char v7; // bp
  char v8; // r13
  unsigned __int8 v9; // r14
  __int64 v11; // rax
  __int64 v12; // r12
  char v13; // al
  char v14; // bp
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  _BYTE *v18; // r13
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // r12
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // edi
  __int64 (__fastcall *v34)(); // rdx
  __int64 v35; // rax
  __int64 (__fastcall *v36)(); // rdx
  __int64 v37; // rbx
  __int64 v38; // rax
  char v39; // [rsp+17h] [rbp-551h]
  char v41; // [rsp+24h] [rbp-544h]
  char v42; // [rsp+24h] [rbp-544h]
  __int64 v43; // [rsp+28h] [rbp-540h] BYREF
  __int64 v44; // [rsp+30h] [rbp-538h]
  unsigned __int64 v45; // [rsp+38h] [rbp-530h]
  __int64 v46; // [rsp+40h] [rbp-528h] BYREF
  char v47; // [rsp+48h] [rbp-520h]
  __int128 v48; // [rsp+50h] [rbp-518h] BYREF
  __int128 v49; // [rsp+60h] [rbp-508h]
  __int64 v50; // [rsp+70h] [rbp-4F8h]
  _BYTE v51[24]; // [rsp+80h] [rbp-4E8h] BYREF
  __int128 v52; // [rsp+98h] [rbp-4D0h]
  __int64 v53; // [rsp+A8h] [rbp-4C0h]
  __int64 v54; // [rsp+B0h] [rbp-4B8h]
  __int64 *v55; // [rsp+B8h] [rbp-4B0h] BYREF
  __int64 (__fastcall *v56)(); // [rsp+C0h] [rbp-4A8h]
  _OWORD *v57; // [rsp+C8h] [rbp-4A0h]
  __int64 (__fastcall *v58)(); // [rsp+D0h] [rbp-498h]
  int v59; // [rsp+DCh] [rbp-48Ch]
  __int64 v60; // [rsp+E0h] [rbp-488h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-480h]
  __int64 v62; // [rsp+F0h] [rbp-478h]
  _BYTE *v63; // [rsp+F8h] [rbp-470h]
  __int64 v64; // [rsp+100h] [rbp-468h] BYREF
  _OWORD v65[19]; // [rsp+108h] [rbp-460h] BYREF
  unsigned __int64 v66; // [rsp+238h] [rbp-330h]
  char v67; // [rsp+240h] [rbp-328h]
  _OWORD src[19]; // [rsp+248h] [rbp-320h] BYREF
  __int64 v69; // [rsp+378h] [rbp-1F0h] BYREF
  _BYTE dest[136]; // [rsp+380h] [rbp-1E8h] BYREF
  _BYTE v71[352]; // [rsp+408h] [rbp-160h] BYREF

  v54 = a6;
  v66 = a2;
  v67 = a3;
  v7 = a4[248];
  v63 = a4;
  v39 = v7;
  if ( v7 )
  {
    v60 = 0LL;
    v61 = 8LL;
    v62 = 0LL;
    v8 = a4[243];
    v9 = a4[250];
  }
  else
  {
    v45 = a2;
    v41 = a3;
    v11 = alloc::alloc::Global::alloc_impl(8LL, 608LL, 0LL);
    if ( !v11 )
      alloc::alloc::handle_alloc_error(8LL, 608LL);
    v12 = v11;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v65, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
    *(_QWORD *)&v49 = *(_QWORD *)&v65[1];
    v48 = v65[0];
    *(_QWORD *)&v65[0] = 0LL;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, asc_D164B, 1LL);
    *(_QWORD *)&v51[16] = *(_QWORD *)&src[1];
    *(_OWORD *)v51 = src[0];
    v13 = a4[243];
    v9 = a4[250];
    v8 = v13;
    v14 = v13;
    uu_ls::PathData::new((__int64)src, (__int64)&v48, v65, (__int64 *)v51, v13, v9, 0);
    std::path::Path::join(&v55, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
    *(_QWORD *)v51 = 0LL;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v65, asc_D1649, 2LL);
    *(_QWORD *)&v49 = *(_QWORD *)&v65[1];
    v48 = v65[0];
    uu_ls::PathData::new((__int64)v65, (__int64)&v55, v51, (__int64 *)&v48, v14, v9, 0);
    memcpy((void *)v12, src, 0x130uLL);
    memcpy((void *)(v12 + 304), v65, 0x130uLL);
    v60 = 2LL;
    v61 = v12;
    v62 = 2LL;
    a3 = v41;
    a2 = v45;
  }
  v46 = a2;
  v47 = a3;
  v45 = 0x8000000000000001LL;
  v42 = v8;
  v59 = v9;
  while ( 1 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v51, &v46);
    if ( *(_DWORD *)v51 != 1 )
      break;
    v15 = *(_QWORD *)&v51[16];
    if ( *(_QWORD *)&v51[8] )
    {
      v50 = v53;
      v49 = v52;
      v48 = *(_OWORD *)&v51[8];
      if ( (unsigned __int8)uu_ls::should_display((__int64)&v48, (__int64)v63) )
      {
        std::fs::DirEntry::path(&v55, &v48);
        *((_QWORD *)&v65[2] + 1) = v50;
        *(_OWORD *)((char *)&v65[1] + 8) = v49;
        *(_OWORD *)((char *)v65 + 8) = v48;
        *(_QWORD *)&v65[0] = 1LL;
        *(_QWORD *)&src[0] = 0x8000000000000000LL;
        uu_ls::PathData::new((__int64)v71, (__int64)&v55, v65, (__int64 *)src, v42, v59, 0);
        alloc::vec::Vec<T,A>::push(&v60, v71, &off_286B98);
      }
      else
      {
        core::ptr::drop_in_place<std::fs::DirEntry>(&v48);
      }
    }
    else
    {
      v64 = *(_QWORD *)&v51[16];
      v16 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
      if ( v16 )
      {
        v21 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
        core::ptr::drop_in_place<std::io::error::Error>(&v64);
        core::ptr::drop_in_place<std::fs::ReadDir>(&v46);
        goto LABEL_27;
      }
      *((_QWORD *)&src[0] + 1) = v15;
      *(_QWORD *)&src[0] = v45;
      uucore::mods::error::set_exit_code(1LL);
      v43 = uucore::util_name();
      v44 = v17;
      v55 = &v43;
      v56 = <&T as core::fmt::Display>::fmt;
      v57 = src;
      v58 = <uu_ls::LsError as core::fmt::Display>::fmt;
      *(_QWORD *)&v65[0] = &unk_286B10;
      *((_QWORD *)&v65[0] + 1) = 3LL;
      *(_QWORD *)&v65[1] = &v55;
      *(_OWORD *)((char *)&v65[1] + 8) = 2uLL;
      std::io::stdio::_eprint(v65);
      core::ptr::drop_in_place<uu_ls::LsError>(src);
    }
  }
  core::ptr::drop_in_place<std::fs::ReadDir>(&v46);
  v18 = v63;
  v19 = v61;
  v20 = v62;
  uu_ls::sort_entries(v61, v62, v63, a5);
  if ( v18[256] == 1 || v18[242] == 1 )
  {
    uu_ls::return_total(v65, v19, v20, v18, a5);
    v21 = *((_QWORD *)&v65[0] + 1);
    if ( *(_QWORD *)&v65[0] == 0x8000000000000000LL )
      goto LABEL_27;
    src[0] = v65[0];
    *(_QWORD *)&src[1] = *(_QWORD *)&v65[1];
    *(_QWORD *)v51 = *((_QWORD *)&v65[0] + 1);
    v22 = *(_QWORD *)&v65[1];
    *(_QWORD *)&v51[8] = *(_QWORD *)&v65[1];
    *(_QWORD *)&v48 = v51;
    *((_QWORD *)&v48 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v65[0] = &unk_CF290;
    *((_QWORD *)&v65[0] + 1) = 1LL;
    *(_QWORD *)&v65[1] = &v48;
    *(_OWORD *)((char *)&v65[1] + 8) = 1uLL;
    v23 = std::io::Write::write_fmt(a5, v65);
    if ( v23 )
    {
      v21 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
      core::ptr::drop_in_place<alloc::string::String>(src);
      goto LABEL_27;
    }
    if ( v18[246] )
    {
      v24 = a7[6];
      if ( !v24 )
      {
        v25 = a7[2];
        if ( v25 )
          v24 = *(_QWORD *)(a7[1] + 16 * v25 - 8) + 1LL;
        else
          v24 = 0LL;
      }
      a7[6] = v22 + v24 + 2;
    }
    core::ptr::drop_in_place<alloc::string::String>(src);
  }
  v21 = uu_ls::display_items(v19, v20, v18, a5, a7);
  if ( !v21 )
  {
    if ( v18[238] == 1 )
    {
      *(_QWORD *)&v48 = v19;
      *((_QWORD *)&v48 + 1) = v19 + 304 * v20;
      *(_QWORD *)&v49 = 2 * (unsigned int)(v39 == 0);
      v27 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v48);
      if ( v27 )
      {
        v28 = v27;
        LOBYTE(v45) = v18[246];
        do
        {
          v29 = v28 + 24;
          std::fs::read_dir(&v46, v28 + 24);
          v30 = v28;
          if ( v47 == 2 )
          {
            v31 = v46;
            v43 = v46;
            v32 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
            if ( v32 )
            {
              v21 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v32);
              core::ptr::drop_in_place<std::io::error::Error>(&v43);
              goto LABEL_27;
            }
            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v65, *(_QWORD *)(v30 + 32), *(_QWORD *)(v30 + 40));
            *((_QWORD *)&src[1] + 1) = *(_QWORD *)&v65[1];
            *(_OWORD *)((char *)src + 8) = v65[0];
            v33 = *(unsigned __int8 *)(v30 + 297);
            *(_QWORD *)&src[2] = v31;
            BYTE8(src[2]) = v33;
            *(_QWORD *)&src[0] = 0x8000000000000002LL;
            uucore::mods::error::set_exit_code((unsigned int)(v33 + 1));
            v55 = (__int64 *)uucore::util_name();
            v56 = v34;
            *(_QWORD *)v51 = &v55;
            *(_QWORD *)&v51[8] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v51[16] = src;
            *(_QWORD *)&v52 = <uu_ls::LsError as core::fmt::Display>::fmt;
            *(_QWORD *)&v65[0] = &unk_286B10;
            *((_QWORD *)&v65[0] + 1) = 3LL;
            *(_QWORD *)&v65[1] = v51;
            *(_OWORD *)((char *)&v65[1] + 8) = 2uLL;
            std::io::stdio::_eprint(v65);
            core::ptr::drop_in_place<uu_ls::LsError>(src);
          }
          else
          {
            v43 = v46;
            LOBYTE(v44) = v47;
            uucore::features::fs::FileInformation::from_path(v65, v28 + 24, *(unsigned __int8 *)(v28 + 296));
            if ( LODWORD(v65[0]) == 1 )
            {
              v38 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v65[0] + 1));
LABEL_52:
              v21 = v38;
LABEL_53:
              core::ptr::drop_in_place<std::fs::ReadDir>(&v43);
              goto LABEL_27;
            }
            memcpy(dest, &v65[1], sizeof(dest));
            v69 = *((_QWORD *)&v65[0] + 1);
            if ( (unsigned __int8)hashbrown::map::HashMap<K,V,S,A>::insert(v54, &v69) )
            {
              v35 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
              if ( v35 )
                goto LABEL_51;
              <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v65, *(_QWORD *)(v28 + 32), *(_QWORD *)(v28 + 40));
              *((_QWORD *)&src[1] + 1) = *(_QWORD *)&v65[1];
              *(_OWORD *)((char *)src + 8) = v65[0];
              *(_QWORD *)&src[0] = 0x8000000000000005LL;
              uucore::mods::error::set_exit_code(2LL);
              v55 = (__int64 *)uucore::util_name();
              v56 = v36;
              *(_QWORD *)v51 = &v55;
              *(_QWORD *)&v51[8] = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v51[16] = src;
              *(_QWORD *)&v52 = <uu_ls::LsError as core::fmt::Display>::fmt;
              *(_QWORD *)&v65[0] = &unk_286B10;
              *((_QWORD *)&v65[0] + 1) = 3LL;
              *(_QWORD *)&v65[1] = v51;
              *(_OWORD *)((char *)&v65[1] + 8) = 2uLL;
              std::io::stdio::_eprint(v65);
              core::ptr::drop_in_place<uu_ls::LsError>(src);
              core::ptr::drop_in_place<std::fs::ReadDir>(&v43);
            }
            else
            {
              *(_QWORD *)&v65[0] = &off_2866E0;
              *((_QWORD *)&v65[0] + 1) = 1LL;
              v65[1] = 8uLL;
              v35 = std::io::Write::write_fmt(a5, v65);
              if ( v35 )
                goto LABEL_51;
              if ( (v45 & 1) != 0 )
              {
                a7[6] = 2LL;
                v21 = uu_ls::dired::indent(a5);
                if ( v21 )
                  goto LABEL_53;
                alloc::string::String::from_utf8_lossy(v65, *(_QWORD *)(v30 + 32));
                v37 = *(_QWORD *)&v65[1];
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v65);
                uu_ls::dired::calculate_subdired(a7, v37);
                a7[6] += v37 + 3;
              }
              v35 = uu_ls::show_dir_name(v30, a5, (__int64)v18);
              if ( v35
                || (*(_QWORD *)&v65[0] = &off_2866E0,
                    *((_QWORD *)&v65[0] + 1) = 1LL,
                    v65[1] = 8uLL,
                    (v35 = std::io::Write::write_fmt(a5, v65)) != 0) )
              {
LABEL_51:
                v38 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35);
                goto LABEL_52;
              }
              v21 = uu_ls::enter_directory(v30, v43, (unsigned __int8)v44, (_DWORD)v18, a5, v54, (__int64)a7);
              if ( v21 )
                goto LABEL_27;
              uucore::features::fs::FileInformation::from_path(v65, v29, *(unsigned __int8 *)(v30 + 296));
              if ( LODWORD(v65[0]) == 1 )
              {
                v21 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v65[0] + 1));
                goto LABEL_27;
              }
              memcpy((char *)src + 8, &v65[1], 0x88uLL);
              *(_QWORD *)&src[0] = *((_QWORD *)&v65[0] + 1);
              hashbrown::map::HashMap<K,V,S,A>::remove(v54, src);
            }
          }
          v28 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v48);
        }
        while ( v28 );
      }
    }
    v21 = 0LL;
  }
LABEL_27:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v60);
  return v21;
}