__int64 __fastcall uu_head::read_but_last_n_lines(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v7; // [rsp+8h] [rbp-E0h] BYREF
  _QWORD v8[3]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+30h] [rbp-B8h]
  __int64 v11; // [rsp+38h] [rbp-B0h]
  _OWORD v12[3]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+70h] [rbp-78h]
  _OWORD v14[3]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v15; // [rsp+B0h] [rbp-38h]

  v7 = std::io::stdio::stdout();
  v6 = std::io::stdio::Stdout::lock(&v7);
  uu_head::take::TakeAllBut<I>::new(v14, a1, a3, a2);
  v13 = v15;
  v12[2] = v14[2];
  v12[1] = v14[1];
  v12[0] = v14[0];
  while ( 1 )
  {
    <uu_head::take::TakeAllBut<I> as core::iter::traits::iterator::Iterator>::next(&v9, v12);
    if ( v9 == 0x8000000000000001LL )
    {
      core::ptr::drop_in_place<uu_head::take::TakeAllBut<uucore::features::lines::Lines<&mut std::io::buffered::bufreader::BufReader<&std::fs::File>>>>(v12);
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v6);
      return 0LL;
    }
    v4 = v10;
    if ( v9 == 0x8000000000000000LL )
      break;
    v8[0] = v9;
    v8[1] = v10;
    v8[2] = v11;
    v4 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v6, v10);
    if ( v4 )
    {
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v8);
      break;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v8);
  }
  core::ptr::drop_in_place<uu_head::take::TakeAllBut<uucore::features::lines::Lines<&mut std::io::buffered::bufreader::BufReader<&std::fs::File>>>>(v12);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v6);
  return v4;
}
