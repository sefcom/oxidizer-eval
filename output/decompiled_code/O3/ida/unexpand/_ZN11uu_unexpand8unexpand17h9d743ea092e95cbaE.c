__int64 __fastcall uu_unexpand::unexpand(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int8 v7; // r12
  char v8; // r13
  __int64 until; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v17; // [rsp+8h] [rbp-160h] BYREF
  __int64 v18; // [rsp+10h] [rbp-158h]
  _QWORD v19[2]; // [rsp+18h] [rbp-150h] BYREF
  __int64 v20; // [rsp+28h] [rbp-140h]
  _QWORD v21[2]; // [rsp+30h] [rbp-138h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-128h] BYREF
  _QWORD v23[4]; // [rsp+50h] [rbp-118h] BYREF
  _OWORD v24[3]; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-C8h]
  __int128 v26; // [rsp+A8h] [rbp-C0h] BYREF
  __int128 v27; // [rsp+B8h] [rbp-B0h]
  __int128 v28; // [rsp+C8h] [rbp-A0h]
  __int64 v29; // [rsp+D8h] [rbp-90h]
  _QWORD v30[5]; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD v31[12]; // [rsp+108h] [rbp-60h] BYREF

  v1 = std::io::stdio::stdout();
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v30, 0x2000LL, v1);
  v2 = *(_QWORD **)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 40);
  v19[0] = 0LL;
  v19[1] = 1LL;
  v20 = 0LL;
  if ( v3 < 2 )
    v4 = 0LL;
  else
    v4 = v2[v3 - 1];
  v5 = *(_QWORD *)(a1 + 8) + 24LL * *(_QWORD *)(a1 + 16);
  v21[0] = *(_QWORD *)(a1 + 8);
  v21[1] = v5;
  v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v21);
  if ( v6 )
  {
    v7 = *(_BYTE *)(a1 + 48);
    v8 = *(_BYTE *)(a1 + 49);
    do
    {
      uu_unexpand::open(&v26, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
      if ( (_QWORD)v26 )
      {
        v25 = v29;
        v24[2] = v28;
        v24[1] = v27;
        v24[0] = v26;
        while ( 1 )
        {
          until = std::io::read_until(v24, 10LL, v19);
          v11 = v10;
          if ( until )
            v11 = v20;
          if ( !v11 )
            break;
          core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(until, v10);
          v12 = uu_unexpand::unexpand_line((__int64)v19, v30, v7, v8, v4, v2, v3);
          if ( v12 )
          {
            v15 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v24);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v19);
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v30);
            return v15;
          }
        }
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(until, v10);
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v24);
      }
      else
      {
        v17 = *((_QWORD *)&v26 + 1);
        v18 = v27;
        v13 = (*(unsigned int (**)(void))(v27 + 96))();
        uucore::mods::error::set_exit_code(v13);
        v22[0] = uucore::util_name(v13);
        v22[1] = v14;
        v23[0] = v22;
        v23[1] = <&T as core::fmt::Display>::fmt;
        v23[2] = &v17;
        v23[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v31[0] = &unk_11ED30;
        v31[1] = 3LL;
        v31[4] = 0LL;
        v31[2] = v23;
        v31[3] = 2LL;
        std::io::stdio::_eprint(v31);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v17, v18);
      }
      v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v21);
    }
    while ( v6 );
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v19);
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v30);
  return 0LL;
}
