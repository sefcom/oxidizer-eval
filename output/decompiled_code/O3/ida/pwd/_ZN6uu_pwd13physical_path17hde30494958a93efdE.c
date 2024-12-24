__int64 __fastcall uu_pwd::physical_path(__int64 a1)
{
  std::env::current_dir(a1);
  return a1;
}
