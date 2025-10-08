bool __fastcall uu_uniq::should_extract_obs_skip_chars(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // al
  unsigned __int64 v9; // rdx
  int v10; // edx
  bool result; // al
  _QWORD v12[6]; // [rsp+8h] [rbp-30h] BYREF

  LODWORD(v12[0]) = 0;
  v6 = core::char::methods::encode_utf8_raw(43LL, v12);
  result = (unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, v6, v7)
        && (v8 = uucore::mods::posix::posix_version(),
            !(a4 & 1 | (v9 >= (unsigned __int64)&unk_30A2A) | a3 & 1 | ((v8 & 1) == 0)))
        && (v12[0] = a1,
            v12[1] = a1 + a2,
            !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(v12, 1LL))
        && (core::str::validations::next_code_point(v12) & 1) != 0
        && (unsigned int)(v10 - 48) < 0xA;
  return result;
}