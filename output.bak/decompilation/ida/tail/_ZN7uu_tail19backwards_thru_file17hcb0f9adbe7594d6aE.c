__int64 __fastcall uu_tail::backwards_thru_file(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 back; // rax
  _BYTE *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+10h] [rbp-C8h]
  __int64 v12; // [rsp+18h] [rbp-C0h]
  __int128 v13; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-A8h]
  __int64 v15; // [rsp+40h] [rbp-98h] BYREF
  __int128 v16; // [rsp+48h] [rbp-90h]
  __int64 v17; // [rsp+58h] [rbp-80h]
  _QWORD v18[4]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v19[11]; // [rsp+80h] [rbp-58h] BYREF

  uu_tail::chunks::ReverseChunks::new(v19, a1);
  v19[4] = 0LL;
  result = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v15, v19);
  if ( (_QWORD)v16 != 0x8000000000000000LL )
  {
    v5 = 0LL;
LABEL_4:
    v13 = v16;
    v14 = v17;
    v10 = *((_QWORD *)&v16 + 1);
    v11 = *((_QWORD *)&v16 + 1) + v17;
    v12 = 0LL;
    if ( !v15 && v17 && *(_BYTE *)(v17 + *((_QWORD *)&v13 + 1) - 1) == a3 )
      <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v10);
    v18[2] = v12;
    v18[0] = v10;
    v18[1] = v11;
    do
    {
      back = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(v18);
      if ( !v7 )
      {
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v13);
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v15, v19);
        result = 0x8000000000000000LL;
        if ( (_QWORD)v16 == 0x8000000000000000LL )
          return result;
        goto LABEL_4;
      }
    }
    while ( *v7 != a3 || ++v5 < a2 );
    v8 = <std::fs::File as std::io::Seek>::seek(a1, 2LL, back + 1);
    core::result::Result<T,E>::unwrap(v8, v9, &off_1BBA58);
    return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v13);
  }
  return result;
}
