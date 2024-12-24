        __int64 a8)
{
  char v12; // r13
  __int64 v14; // r14
  unsigned __int8 v15; // bp
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(); // rdx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int128 v31; // [rsp+0h] [rbp-1F8h] BYREF
  _QWORD *v32; // [rsp+10h] [rbp-1E8h]
  __int128 v33; // [rsp+20h] [rbp-1D8h] BYREF
  char ***v34; // [rsp+30h] [rbp-1C8h]
  __int64 v35; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-1B0h]
  __m256i v37; // [rsp+50h] [rbp-1A8h] BYREF
  __int128 v38; // [rsp+70h] [rbp-188h]
  __int64 v39; // [rsp+80h] [rbp-178h]
  _BYTE v40[24]; // [rsp+90h] [rbp-168h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-148h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-138h]
  __int128 v43; // [rsp+D0h] [rbp-128h]
  __int128 v44; // [rsp+E0h] [rbp-118h]
  __m256i *v45; // [rsp+F0h] [rbp-108h] BYREF
  __int64 (__fastcall *v46)(); // [rsp+F8h] [rbp-100h]
  _BYTE v47[128]; // [rsp+100h] [rbp-F8h] BYREF
  _BYTE v48[72]; // [rsp+1B0h] [rbp-48h] BYREF

  v32 = (_QWORD *)*((_QWORD *)a3 + 2);
  v31 = *a3;
  *(_QWORD *)&v40[16] = *((_QWORD *)a3 + 5);
  *(_OWORD *)v40 = *(__int128 *)((char *)a3 + 24);
  v34 = (char ***)*((_QWORD *)a3 + 8);
  v33 = a3[3];
  v12 = *((_BYTE *)a3 + 72);
  if ( ((*(_BYTE *)(a4 + 65) == 0) & (unsigned __int8)std::path::Path::is_symlink(*((_QWORD *)&v31 + 1), v32)) == 0 )
  {
    if ( (unsigned __int8)std::path::Path::is_dir(*((_QWORD *)&v31 + 1), v32)
      && !(unsigned __int8)uu_cp::copydir::ends_with_slash_dot() )
    {
      std::fs::metadata(v47);
      if ( *(_QWORD *)v47 == 2LL )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, *(_QWORD *)&v47[8]);
        if ( v12 )
        {
          <uu_cp::Error as core::convert::From<&str>>::from(v47, aCannotOverwrit_0, 45LL);
LABEL_24:
          v19 = *(_OWORD *)v47;
          v20 = *(_OWORD *)&v47[16];
          v21 = *(_OWORD *)&v47[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v47[48];
          *(_OWORD *)(a1 + 32) = v21;
          *(_OWORD *)(a1 + 16) = v20;
          *(_OWORD *)a1 = v19;
          goto LABEL_3;
        }
        uu_cp::copydir::build_dir(
          (__int64 *)v47,
          *(unsigned int *)(a4 + 48),
          *(unsigned __int8 *)(a4 + 50),
          (__int64)&v33,
          0);
        v22 = *(_QWORD *)v47;
        if ( *(_QWORD *)v47 == 13LL )
        {
          if ( *(_BYTE *)(a4 + 72) )
          {
            v26 = *(_QWORD *)&v40[8];
            uu_cp::context_for(
              (__int64)&v41,
              *(__int64 *)&v40[8],
              *(__int64 *)&v40[16],
              *((__int64 *)&v33 + 1),
              (__int64)v34);
            v37.m256i_i64[0] = (__int64)&v41;
            v37.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)v47 = &unk_1B5BF0;
            *(_QWORD *)&v47[8] = 2LL;
            *(_QWORD *)&v47[32] = 0LL;
            *(_QWORD *)&v47[16] = &v37;
            *(_QWORD *)&v47[24] = 1LL;
            std::io::stdio::_print(v47, v26, v27, v28, v29, v30);
            core::ptr::drop_in_place<alloc::string::String>(&v41);
          }
          *(_QWORD *)a1 = 13LL;
          goto LABEL_3;
        }
        *(_QWORD *)(a1 + 56) = *(_QWORD *)&v47[56];
        v23 = *(_OWORD *)&v47[8];
        v24 = *(_OWORD *)&v47[24];
        v25 = *(_OWORD *)&v47[40];
LABEL_32:
        *(_OWORD *)(a1 + 40) = v25;
        *(_OWORD *)(a1 + 24) = v24;
        *(_OWORD *)(a1 + 8) = v23;
        *(_QWORD *)a1 = v22;
        goto LABEL_3;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
        *(_QWORD *)v47,
        *(_QWORD *)&v47[8]);
    }
    if ( !(unsigned __int8)std::path::Path::is_dir(*((_QWORD *)&v31 + 1), v32) )
    {
      if ( a6 )
      {
        uu_cp::copy_file(
          (__int64)&v41,
          a2,
          *((__int128 **)&v31 + 1),
          v32,
          *((__int64 (__fastcall **)())&v33 + 1),
          v34,
          (_BYTE *)a4,
          a5,
          a7,
          a8,
          0);
        if ( (_DWORD)v41 != 13 )
        {
          *(_OWORD *)&v47[48] = v44;
          *(_OWORD *)&v47[32] = v43;
          *(_OWORD *)&v47[16] = v42;
          *(_OWORD *)v47 = v41;
          if ( (unsigned __int8)std::path::Path::is_symlink(*((_QWORD *)&v31 + 1), v32) )
          {
            core::ptr::drop_in_place<uu_cp::Error>(v47);
          }
          else
          {
            v22 = *(_QWORD *)v47;
            v37 = *(__m256i *)&v47[8];
            v38 = *(_OWORD *)&v47[40];
            v39 = *(_QWORD *)&v47[56];
            if ( *(_QWORD *)v47 != 13LL )
            {
              *(_QWORD *)(a1 + 56) = v39;
              v23 = *(_OWORD *)v37.m256i_i8;
              v24 = *(_OWORD *)&v37.m256i_u64[2];
              v25 = v38;
              goto LABEL_32;
            }
          }
        }
      }
      else
      {
        uu_cp::copy_file(
          (__int64)v47,
          a2,
          *((__int128 **)&v31 + 1),
          v32,
          *((__int64 (__fastcall **)())&v33 + 1),
          v34,
          (_BYTE *)a4,
          a5,
          a7,
          a8,
          0);
        if ( *(_QWORD *)v47 == 3LL )
        {
          v14 = *(_QWORD *)&v47[32];
          if ( (unsigned __int8)std::io::error::Error::kind(*(_QWORD *)&v47[32]) != 1 )
            goto LABEL_24;
          v15 = std::io::error::Error::kind(v14);
          v37.m256i_i64[0] = 1LL;
          *(_OWORD *)&v37.m256i_u64[1] = *(_OWORD *)&v40[8];
          v37.m256i_i8[24] = 1;
          v45 = &v37;
          v46 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v41 = &off_1B5C10;
          *((_QWORD *)&v41 + 1) = 2LL;
          *(_QWORD *)&v43 = 0LL;
          *(_QWORD *)&v42 = &v45;
          *((_QWORD *)&v42 + 1) = 1LL;
          core::option::Option<T>::map_or_else(v48, &v41);
          v35 = uucore::mods::error::UIoError::new(v15, v48);
          v36 = v16;
          v17 = (*(unsigned int (__fastcall **)(__int64))(v16 + 96))(v35);
          uucore::mods::error::set_exit_code(v17);
          v45 = (__m256i *)uucore::util_name(v17, v48);
          v46 = v18;
          v37.m256i_i64[0] = (__int64)&v45;
          v37.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          v37.m256i_i64[2] = (__int64)&v35;
          v37.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          *(_QWORD *)&v41 = &unk_1B5C30;
          *((_QWORD *)&v41 + 1) = 3LL;
          *(_QWORD *)&v43 = 0LL;
          *(_QWORD *)&v42 = &v37;
          *((_QWORD *)&v42 + 1) = 2LL;
          std::io::stdio::_eprint(&v41);
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v35, v36);
          core::ptr::drop_in_place<std::io::error::Error>(v14);
          if ( *(_QWORD *)v47 == 3LL )
          {
            core::ptr::drop_in_place<alloc::string::String>(&v47[8]);
          }
          else if ( *(_QWORD *)v47 != 13LL )
          {
            core::ptr::drop_in_place<uu_cp::Error>(v47);
          }
        }
        else if ( *(_DWORD *)v47 != 13 )
        {
          goto LABEL_24;
        }
      }
    }
    *(_QWORD *)a1 = 13LL;
    core::ptr::drop_in_place<std::path::PathBuf>(&v33);
    core::ptr::drop_in_place<std::path::PathBuf>(v40);
    return core::ptr::drop_in_place<std::path::PathBuf>(&v31);
  }
  uu_cp::copy_link((_QWORD *)a1, *((__int64 *)&v31 + 1), (__int64)v32, *((__int64 *)&v33 + 1), (__int64)v34, a5);
LABEL_3:
  core::ptr::drop_in_place<std::path::PathBuf>(&v33);
  core::ptr::drop_in_place<std::path::PathBuf>(v40);
  return core::ptr::drop_in_place<std::path::PathBuf>(&v31);
}
