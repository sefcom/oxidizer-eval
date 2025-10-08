void *__fastcall rg::flags::hiargs::HiArgs::walk_builder(void *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rbx
  _BYTE *v13; // rax
  char v14; // cl
  char v15; // si
  char v16; // dl
  char v17; // dl
  char v18; // al
  char v20; // al
  char v21; // al
  __int64 v22; // [rsp+0h] [rbp-258h] BYREF
  __int64 v23; // [rsp+8h] [rbp-250h]
  char **v24; // [rsp+10h] [rbp-248h] BYREF
  __int64 v25; // [rsp+18h] [rbp-240h]
  _QWORD *v26; // [rsp+20h] [rbp-238h]
  __int128 v27; // [rsp+28h] [rbp-230h]
  void *dest; // [rsp+40h] [rbp-218h]
  __int64 v29; // [rsp+48h] [rbp-210h] BYREF
  _QWORD v30[2]; // [rsp+50h] [rbp-208h] BYREF
  __int128 v31; // [rsp+60h] [rbp-1F8h] BYREF
  __m256i v32; // [rsp+70h] [rbp-1E8h]
  __int128 v33; // [rsp+90h] [rbp-1C8h]
  __int128 v34; // [rsp+A0h] [rbp-1B8h]
  __int128 v35; // [rsp+B0h] [rbp-1A8h]
  __int64 v36; // [rsp+C0h] [rbp-198h]
  __int128 v37; // [rsp+E0h] [rbp-178h] BYREF
  __m256i v38; // [rsp+F0h] [rbp-168h]
  __int128 v39; // [rsp+110h] [rbp-148h]
  __int128 v40; // [rsp+120h] [rbp-138h]
  __int128 v41; // [rsp+130h] [rbp-128h]
  __int64 v42; // [rsp+140h] [rbp-118h]
  _OWORD src[16]; // [rsp+150h] [rbp-108h] BYREF

  dest = a1;
  v2 = *(_QWORD *)(a2 + 352);
  if ( !v2 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_3EAFE0);
  v4 = *(_QWORD *)(a2 + 344);
  ignore::walk::WalkBuilder::new(src, v4);
  *(_QWORD *)&v31 = v4;
  *((_QWORD *)&v31 + 1) = v4 + 24 * v2;
  v32.m256i_i64[0] = 1LL;
  while ( 1 )
  {
    v32.m256i_i64[0] = 0LL;
    if ( !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(&v31) )
      break;
    while ( 1 )
    {
      ignore::walk::WalkBuilder::add(src);
      if ( v32.m256i_i64[0] )
        break;
      if ( (_QWORD)v31 == *((_QWORD *)&v31 + 1) )
        goto LABEL_8;
      *(_QWORD *)&v31 = v31 + 24;
    }
  }
LABEL_8:
  if ( !*(_BYTE *)(a2 + 897) )
  {
    v5 = *(_QWORD *)(a2 + 328);
    if ( v5 )
    {
      v6 = *(_QWORD *)(a2 + 320);
      v7 = 24 * v5;
      do
      {
        ignore::walk::WalkBuilder::add_ignore(&v37, src, v6);
        if ( (_DWORD)v37 == 9 )
        {
          core::ptr::drop_in_place<core::result::Result<&mut ignore::gitignore::GitignoreBuilder,ignore::Error>>(&v37);
        }
        else
        {
          *(_QWORD *)&v33 = v39;
          v32 = v38;
          v31 = v37;
          if ( rg::messages::messages() && rg::messages::ignore_messages() )
          {
            v24 = (char **)std::io::stdio::stdout();
            v23 = std::io::stdio::Stdout::lock(&v24);
            v24 = (char **)&std::io::stdio::stderr::INSTANCE;
            v22 = std::io::stdio::Stdout::lock(&v24);
            v24 = &off_3E99C8;
            v25 = 1LL;
            v26 = (_QWORD *)&byte_8;
            v27 = 0LL;
            v8 = std::io::Write::write_fmt(&v22, &v24);
            v30[0] = v8;
            if ( v8 )
            {
              v24 = (char **)v8;
              v20 = std::io::error::Error::kind(v8);
              std::process::exit(2 * (v20 != 11));
            }
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v30);
            v30[0] = &v31;
            v30[1] = <ignore::Error as core::fmt::Display>::fmt;
            v24 = (char **)&unk_3EA800;
            v25 = 2LL;
            v26 = v30;
            v27 = 1uLL;
            v9 = std::io::Write::write_fmt(&v22, &v24);
            v29 = v9;
            if ( v9 )
            {
              v24 = (char **)v9;
              v21 = std::io::error::Error::kind(v9);
              std::process::exit(2 * (v21 != 11));
            }
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v29);
            core::ptr::drop_in_place<std::io::stdio::StderrLock>(v23);
            core::ptr::drop_in_place<std::io::stdio::StderrLock>(v22);
          }
          core::ptr::drop_in_place<ignore::Error>(&v31);
        }
        v6 += 24LL;
        v7 -= 24LL;
      }
      while ( v7 );
    }
  }
  src[0] = *(_OWORD *)(a2 + 48);
  LOBYTE(src[13]) = *(_BYTE *)(a2 + 883);
  src[1] = *(_OWORD *)(a2 + 64);
  v10 = *(_QWORD *)(a2 + 784);
  *(_QWORD *)&src[11] = v10;
  BYTE1(src[13]) = *(_BYTE *)(a2 + 904);
  v11 = ignore::walk::WalkBuilder::skip_stdout(src, *(_BYTE *)(a2 + 802) == 0);
  <ignore::gitignore::Gitignore as core::clone::Clone>::clone(&v31, a2 + 208);
  v42 = v36;
  v41 = v35;
  v40 = v34;
  v39 = v33;
  v38 = v32;
  v37 = v31;
  v12 = ignore::walk::WalkBuilder::overrides(v11, &v37);
  <ignore::types::Types as core::clone::Clone>::clone(&v31, a2 + 496);
  v13 = (_BYTE *)ignore::walk::WalkBuilder::types(v12, &v31);
  v13[152] = *(_BYTE *)(a2 + 885) ^ 1;
  v13[154] = *(_BYTE *)(a2 + 899) ^ 1;
  v14 = *(_BYTE *)(a2 + 895);
  v13[153] = v14 ^ 1;
  v15 = *(_BYTE *)(a2 + 900);
  v16 = *(_BYTE *)(a2 + 898) ^ 1;
  if ( v15 )
    v16 = 0;
  v13[155] = v16;
  v13[156] = v15 ^ 1;
  v17 = *(_BYTE *)(a2 + 896) ^ 1;
  if ( v15 )
    v17 = 0;
  v13[157] = v17;
  v13[159] = *(_BYTE *)(a2 + 901) ^ 1;
  v13[158] = *(_BYTE *)(a2 + 886);
  if ( !v14 )
    ignore::dir::IgnoreBuilder::add_custom_ignore_filename(&src[5]);
  v18 = *(_BYTE *)(a2 + 800);
  if ( v18 != 2 )
  {
    if ( v10 != 1 )
    {
      *(_QWORD *)&v31 = &off_3EAFD0;
      *((_QWORD *)&v31 + 1) = 1LL;
      v32.m256i_i64[0] = 8LL;
      *(_OWORD *)&v32.m256i_u64[1] = 0LL;
      core::panicking::assert_failed(0LL, &unk_631A8, a2 + 784, &v31, &off_3EAFF8);
    }
    if ( (v18 & 1) == 0 && !*(_BYTE *)(a2 + 801) )
      ignore::walk::WalkBuilder::sort_by_file_name(src);
  }
  return memcpy(dest, src, 0xD8uLL);
}