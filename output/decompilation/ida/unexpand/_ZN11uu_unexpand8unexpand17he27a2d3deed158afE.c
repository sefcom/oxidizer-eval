__int64 __fastcall uu_unexpand::unexpand(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // r14
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // [rsp+8h] [rbp-170h] BYREF
  __int64 v19; // [rsp+10h] [rbp-168h]
  __int64 v20; // [rsp+18h] [rbp-160h]
  __int64 v21; // [rsp+20h] [rbp-158h] BYREF
  __int64 v22; // [rsp+28h] [rbp-150h]
  __int64 v23; // [rsp+30h] [rbp-148h]
  __int64 v24; // [rsp+38h] [rbp-140h]
  __int64 v25; // [rsp+40h] [rbp-138h]
  unsigned __int64 v26; // [rsp+48h] [rbp-130h]
  _QWORD v27[2]; // [rsp+50h] [rbp-128h] BYREF
  _QWORD v28[4]; // [rsp+60h] [rbp-118h] BYREF
  _OWORD v29[3]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-C8h]
  __int128 v31; // [rsp+B8h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+C8h] [rbp-B0h]
  __int128 v33; // [rsp+D8h] [rbp-A0h]
  __int64 v34; // [rsp+E8h] [rbp-90h]
  _QWORD v35[6]; // [rsp+F0h] [rbp-88h] BYREF
  _QWORD v36[11]; // [rsp+120h] [rbp-58h] BYREF

  v1 = std::io::stdio::stdout();
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v36, v1);
  v2 = *(_QWORD **)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 40);
  v18 = 0LL;
  v19 = 1LL;
  v20 = 0LL;
  if ( v3 > 1 )
  {
    v23 = v2[v3 - 1];
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      goto LABEL_3;
LABEL_16:
    v16 = 1LL;
    v15 = 0LL;
    goto LABEL_17;
  }
  v23 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    goto LABEL_16;
LABEL_3:
  v26 = v3;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = v5 + 24 * v4;
  v7 = *(_BYTE *)(a1 + 48);
  v8 = *(_BYTE *)(a1 + 49);
  v24 = v6;
  do
  {
    uu_unexpand::open(&v31, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16));
    if ( (_QWORD)v31 )
    {
      v25 = v5;
      v30 = v34;
      v29[2] = v33;
      v29[1] = v32;
      v29[0] = v31;
      while ( 1 )
      {
        v9 = std::io::read_until(v29, &v18);
        v11 = v10;
        if ( (v9 & 1) != 0 )
          v11 = v20;
        if ( !v11 )
          break;
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v9, v10);
        v12 = uu_unexpand::unexpand_line((__int64)&v18, v36, v7, v8, v23, v2, v26);
        if ( v12 )
        {
          core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v29);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v18, v19);
          goto LABEL_18;
        }
      }
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v9, v10);
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v29);
      v5 = v25;
      v6 = v24;
    }
    else
    {
      v21 = *((_QWORD *)&v31 + 1);
      v22 = v32;
      v13 = (*(__int64 (**)(void))(v32 + 88))();
      uucore::mods::error::set_exit_code(v13);
      v27[0] = uucore::util_name();
      v27[1] = v14;
      v28[0] = v27;
      v28[1] = <&T as core::fmt::Display>::fmt;
      v28[2] = &v21;
      v28[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v35[0] = &unk_E8388;
      v35[1] = 3LL;
      v35[4] = 0LL;
      v35[2] = v28;
      v35[3] = 2LL;
      std::io::stdio::_eprint(v35);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v21, v22);
    }
    v5 += 24LL;
  }
  while ( v5 != v6 );
  v15 = v18;
  v16 = v19;
LABEL_17:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v15, v16);
  v12 = 0LL;
LABEL_18:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v36);
  return v12;
}