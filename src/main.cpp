#include <iostream>
#include "config.h"
#include "create.h"
#include "get.h"
#include "load.h"
#include "set.h"
#include "store.h"

int main()
{
    std::cout << PROJECT_NAME << std::endl;

    std::cout << "demo: create" << std::endl;
    demo_vcreate_type();
    demo_vdup_n_type();
    demo_vdupq_n_type();
    demo_vdup_lane_type();
    demo_vdupq_lane_type();
    demo_vmov_n_type();
    demo_vmovq_n_type();
    demo_vmovl_type();
    demo_vmovn_type();
    demo_vqmovn_type();
    demo_vqmovun_type();

    std::cout << "demo: get" << std::endl;
    demo_vget_low_type();
    demo_vget_high_type();
    demo_vget_lane_type();

    std::cout << "demo: load" << std::endl;
    demo_vld1q_type();
    demo_vld1q_lane_type();
    demo_vld1q_dup_type();
    demo_vld2_type();
    demo_vld2_lane_type();
    demo_vld2_dup_type();

    std::cout << "demo: set" << std::endl;
    demo_vset_lane_type();

    std::cout << "demo: store" << std::endl;
    demo_vst1_type();
    demo_vst1_lane_type();
    demo_vst2q_type();
    demo_vst2q_lane_type();

    return 0;
}