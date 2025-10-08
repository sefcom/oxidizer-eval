
  int64_t linera_summary::github::Github::upsert_pr_comment::h3cfdf35c2602963c(int128_t* arg1, int64_t arg2, int128_t* arg3)

{
    *(arg1 + 0x18) = arg2;
    *arg1 = *arg3;
    int64_t result = arg3[1];
    arg1[1] = result;
    *(arg1 + 0x78) = 0;
    return result;
}
