__int64 __fastcall bat::output::OutputType::try_pager(__int64 a1, char a2, char a3, __int128 *a4)
{
  __int64 result; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  char v14; // bp
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int128 v17; // kr00_16
  __int128 v18; // xmm0
  __m256i v19; // [rsp+0h] [rbp-1D8h] BYREF
  int v20; // [rsp+20h] [rbp-1B8h]
  __int64 v21; // [rsp+24h] [rbp-1B4h]
  int v22; // [rsp+2Ch] [rbp-1ACh]
  __int64 v23; // [rsp+30h] [rbp-1A8h]
  __int128 v24; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-190h]
  __int128 v26; // [rsp+50h] [rbp-188h]
  __int128 v27; // [rsp+60h] [rbp-178h]
  _BYTE v28[28]; // [rsp+70h] [rbp-168h] BYREF
  int v29; // [rsp+8Ch] [rbp-14Ch]
  __int128 v30; // [rsp+90h] [rbp-148h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-138h]
  __int128 dest; // [rsp+B0h] [rbp-128h] BYREF
  _BYTE v33[40]; // [rsp+C0h] [rbp-118h]
  __int128 v34; // [rsp+190h] [rbp-48h]
  __int128 v35; // [rsp+1A0h] [rbp-38h]

  bat::pager::get_pager(&dest);
  if ( (_QWORD)dest == 0x8000000000000001LL )
    return <bat::error::Error as core::convert::From<&str>>::from(a1, aCouldNotParseP, 30LL);
  v34 = *(_OWORD *)&v33[8];
  v35 = *(_OWORD *)&v33[24];
  if ( (_QWORD)dest == 0x8000000000000000LL )
  {
    bat::output::OutputType::stdout(&dest);
    result = *(_QWORD *)&v33[32];
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&v33[32];
    v8 = dest;
    v9 = *(_OWORD *)v33;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v33[16];
    *(_OWORD *)(a1 + 24) = v9;
    *(_OWORD *)(a1 + 8) = v8;
    *(_BYTE *)a1 = 13;
    return result;
  }
  v24 = dest;
  v25 = *(_QWORD *)v33;
  v27 = v35;
  v26 = v34;
  if ( !BYTE9(v35) )
  {
    *(_BYTE *)a1 = 10;
    return core::ptr::drop_in_place<bat::pager::Pager>(&v24, a4);
  }
  if ( BYTE9(v35) == 4 )
  {
    bat::output::BuiltinPager::new((__int64)&dest);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&v33[32];
    v10 = dest;
    v11 = *(_OWORD *)v33;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v33[16];
    *(_OWORD *)(a1 + 24) = v11;
    *(_OWORD *)(a1 + 8) = v10;
    *(_BYTE *)a1 = 13;
    return core::ptr::drop_in_place<bat::pager::Pager>(&v24, a4);
  }
  a4 = &v24;
  grep_cli::decompress::resolve_binary(&v19, &v24, *(_QWORD *)v33, *((_QWORD *)&dest + 1));
  if ( v19.m256i_i64[0] == 1 )
  {
    bat::output::OutputType::stdout(&dest);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&v33[32];
    v12 = dest;
    v13 = *(_OWORD *)v33;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v33[16];
    *(_OWORD *)(a1 + 24) = v13;
    *(_OWORD *)(a1 + 8) = v12;
    *(_BYTE *)a1 = 13;
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,grep_cli::process::CommandError>>(&v19);
    return core::ptr::drop_in_place<bat::pager::Pager>(&v24, a4);
  }
  *(_QWORD *)&v28[16] = v19.m256i_i64[3];
  *(_OWORD *)v28 = *(_OWORD *)&v19.m256i_u64[1];
  std::process::Command::new(&dest);
  v31 = v27;
  v30 = v26;
  if ( BYTE9(v27) == 1 )
  {
    if ( BYTE8(v27) == 2 || !v31 )
    {
      std::process::Command::arg(&dest, aR_1, 2LL);
      if ( !a2 )
        std::process::Command::arg(&dest, asc_1A2BD1, 2LL);
      if ( a3 != 2 && (a3 & 1) != 0 )
        std::process::Command::arg(&dest, aS_6, 2LL);
      std::process::Command::arg(&dest, aK_0, 2LL);
      v15 = bat::less::retrieve_less_version(&v24);
      v14 = 1;
      if ( ((unsigned __int8)(v15 | (v16 >= 0x212)) & (v15 != 2)) == 0 )
        std::process::Command::arg(&dest, aNoInit, 9LL);
    }
    else
    {
      v19.m256i_i64[2] = v27;
      *(_OWORD *)v19.m256i_i8 = v26;
      std::process::Command::args(&dest, &v19);
      v14 = 0;
    }
    std::process::Command::env(&dest);
  }
  else
  {
    v19.m256i_i64[2] = v27;
    *(_OWORD *)v19.m256i_i8 = v26;
    std::process::Command::args(&dest, &v19);
    v14 = 0;
  }
  std::process::Command::stdin(&dest);
  std::process::Command::spawn(v28, &dest);
  if ( *(_DWORD *)v28 == 1 )
  {
    bat::output::OutputType::try_pager::{{closure}}(&v19, *(_QWORD *)&v28[8]);
  }
  else
  {
    *(_OWORD *)&v19.m256i_u64[2] = *(_OWORD *)&v28[12];
    v20 = v29;
    v19.m256i_i64[0] = 3LL;
    v19.m256i_i64[1] = *(_QWORD *)&v28[4];
  }
  *(_QWORD *)(a1 + 56) = v23;
  v17 = *(_OWORD *)v19.m256i_i8;
  v18 = *(_OWORD *)&v19.m256i_u64[2];
  *(_DWORD *)(a1 + 40) = v20;
  *(_QWORD *)(a1 + 44) = v21;
  *(_DWORD *)(a1 + 52) = v22;
  *(_OWORD *)(a1 + 24) = v18;
  *(_OWORD *)(a1 + 8) = v17;
  *(_BYTE *)a1 = 13;
  if ( v14 )
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v30);
  core::ptr::drop_in_place<std::process::Command>(&dest);
  return core::ptr::drop_in_place<alloc::string::String>(&v24);
}