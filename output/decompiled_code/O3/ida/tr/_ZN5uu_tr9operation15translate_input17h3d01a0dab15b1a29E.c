__int64 __fastcall uu_tr::operation::translate_input(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-88h] BYREF
  __int64 v8; // [rsp+8h] [rbp-80h]
  __int64 v9; // [rsp+10h] [rbp-78h]
  __int64 v10; // [rsp+18h] [rbp-70h] BYREF
  __int64 v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+28h] [rbp-60h]
  _QWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v14[9]; // [rsp+40h] [rbp-48h] BYREF

  v7 = 0LL;
  v8 = 1LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 1LL;
  v12 = 0LL;
  while ( 1 )
  {
    v13[0] = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(a1, 10LL, &v7);
    v13[1] = v4;
    if ( v13[0] || !v4 )
      break;
    v14[0] = v8;
    v14[1] = v8 + v9;
    v14[2] = a3;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v10, v14);
    v5 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v11, v12);
    core::result::Result<T,E>::unwrap(v5);
    v9 = 0LL;
    v12 = 0LL;
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v13);
  }
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v13);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v10);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v7);
  return core::ptr::drop_in_place<std::sys::os_str::bytes::Buf>(a3);
}
