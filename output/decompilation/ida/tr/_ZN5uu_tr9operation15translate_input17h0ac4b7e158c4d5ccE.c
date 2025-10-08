__int64 __fastcall uu_tr::operation::translate_input(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v11; // [rsp+0h] [rbp-78h] BYREF
  __int64 v12; // [rsp+8h] [rbp-70h]
  __int64 v13; // [rsp+10h] [rbp-68h]
  __int64 v14; // [rsp+18h] [rbp-60h] BYREF
  __int64 v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-50h]
  _QWORD v17[9]; // [rsp+30h] [rbp-48h] BYREF

  v11 = 0LL;
  v12 = 1LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 1LL;
  v16 = 0LL;
  while ( 1 )
  {
    v4 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(a1, 10LL, &v11);
    v6 = v4;
    v7 = v5;
    if ( (v4 & 1) != 0 )
      goto LABEL_7;
    if ( !v5 )
    {
      v7 = 0LL;
LABEL_7:
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v4, v7);
      v9 = 0LL;
      goto LABEL_9;
    }
    v17[0] = v12;
    v17[1] = v12 + v13;
    v17[2] = a3;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v14, v17);
    v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v15, v16);
    v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v8);
    if ( v9 )
      break;
    v13 = 0LL;
    v16 = 0LL;
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v6, v7);
  }
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v6, v7);
LABEL_9:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v14, v15);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v11, v12);
  core::ptr::drop_in_place<uu_tr::operation::TranslateOperation>(*a3, a3[1]);
  return v9;
}