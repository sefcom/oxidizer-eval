_QWORD *__fastcall forc_crypto::args::<impl core::convert::From<forc_crypto::args::HashArgs> for alloc::vec::Vec<u8>>::from(
        _QWORD *a1,
        __int128 *a2)
{
  __int128 v3; // [rsp+0h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-18h]

  v4 = *((_QWORD *)a2 + 2);
  v3 = *a2;
  forc_crypto::args::read_content_filepath_or_stdin(a1, &v3);
  return a1;
}