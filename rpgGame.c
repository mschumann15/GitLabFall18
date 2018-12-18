//Contributors


//Brandon LaNuevo Room #1
//Ivan Khaffaji Room #19
//Thomas Jones (Tommiiie) #15
//Brian Godoy room 12
//Hugo Rodriguez Room #10

//Timothy Phung #room 6

//Fernando ochoa room #18

//Edgar Bahena Room #4
//Marcus Schumann Room #8



// Justin Do Room #2
// Darren De Vera Room #3

//kseeram
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h> //sleep timer

//Prototypes
void shuffle(int *a, int *b, int SIZE);
void combine(int *a, int *b, int *c, int *d, int *all);



int rando(void);
int gambleRandom(void);
int room12Spells(int *hp, int enDam);
int room7DiceRoll(int side);
void room7RandomNum(int *ptr, int size);
void room7SortNum(int *ptr, int size);

void stringStuff(char *ptr);

void printUpper(char *arr, int size);

void writeAnswers(void);
int checkAnswers(int *ptr);

int RolltheDiceman(void);
void casecheck(void);
void readfile(void);
void randomfill(void);


int getFileInfo(int num);
void gameOver(int winOrlose);
int checkInput(char option[10]);
void TypeWriter(char *arr);

void warning(int count);
char uppercase(char *str);
int randomize(int *num, int SIZE);

void main(void)
{

    int x,y,z,i,h,g,k,choice=0,pin=0;

  

    char name[256];
    int boxNum=0;
    int num = 6, guess= 0, a;


    srand(time(NULL));

    int power = 0;
    int diceroll;


    printf("Please enter your name: "); //Input any number of array inputs
    scanf("%s",name);

    printf("Hello %s welcome to the rpgGame!\n",name);

    while(choice != 99)
    {
        puts("You find yourself in a dark room and you are not sure how you got here.");
        puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        puts("What door do you choose?");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                {
                    while(choice != 99)
                    {
                        char ch;
                        char hostname[256];
                        char name2[256];
                        FILE *fp;
                        puts("You open the door and you quickly turn arround to find the door quickly disappearing behind you.");
                        puts("In front of you, you now notice a long hallway leading to a room that is completely white.");
                        puts("At this point you have two choices.");
                        puts("1. Walk down the dark hallway.");
                        puts("2. Scream in panic.");
                        scanf("%d", &choice);
                        if(choice == 1)
                        {
                            puts("You begin to wall down the dark hallway.");
                            puts("As you walk, you notice that the room is actually a lot brighter than you thought it was.");
                            puts("You now are inside the white room and it looks like a office cubicle.");
                            puts("In the far right corner you see a old computer");
                            sleep(4);
                            puts("[  675.362959] Kernel panic - not syncing: Watchdog detected hard LOCKUP on cpu 8");
                            usleep(1800);
                            puts("[  675.363355] Pid: 3457, comm: lve_tag_thread veid: 0 Not tainted 2.6.32-673.8.1.lve1.4.3.el6.x86_64 #1");
                            usleep(1800);
                            puts("[  675.363748] Call Trace:");
                            usleep(1800);
                            puts("[  675.363972]  <NMI>  [<ffffffff81546288>] ? panic+0xa7/0x16f");
                            usleep(1800);
                            puts("[  675.364284]  [<ffffffff81015039>] ? sched_clock+0x9/0x10");
                            usleep(1800);
                            puts("[  675.364520]  [<ffffffff81105fdd>] ? watchdog_overflow_callback+0xcd/0xd0");
                            usleep(1800);
                            puts("[  675.364757]  [<ffffffff8113ed17>] ? __perf_event_overflow+0xa7/0x240");
                            usleep(1800);
                            puts("[  675.364993]  [<ffffffff8101ee24>] ? x86_perf_event_set_period+0xf4/0x180");
                            usleep(1800);
                            puts("[  675.365230]  [<ffffffff8113f364>] ? perf_event_overflow+0x14/0x20");
                            usleep(1800);
                            puts("[  675.365464]  [<ffffffff81025bd2>] ? intel_pmu_handle_irq+0x202/0x3f0");
                            usleep(1800);
                            puts("[  675.365703]  [<ffffffff8154bd49>] ? perf_event_nmi_handler+0x39/0xb0");
                            usleep(1800);
                            puts("[  675.365937]  [<ffffffff8154d805>] ? notifier_call_chain+0x55/0x80");
                            usleep(1800);
                            puts("[  675.366171]  [<ffffffff8154d86a>] ? atomic_notifier_call_chain+0x1a/0x20");
                            usleep(1800);
                            puts("[  675.366408]  [<ffffffff810b239e>] ? notify_die+0x2e/0x30");
                            usleep(1800);
                            puts("[  675.366640]  [<ffffffff8154b30b>] ? do_nmi+0x1cb/0x370");
                            usleep(1800);
                            puts("[  675.366870]  [<ffffffff8154ad20>] ? nmi+0x20/0x30");
                            usleep(1800);
                            puts("[  675.367111]  [<ffffffff8154a58e>] ? _spin_lock+0x1e/0x30");
                            usleep(1800);
                            puts("[  675.367343]  <<EOE>>  <IRQ>  [<ffffffffa0283c7d>] ? tag_free_delayed+0x1d/0x60 [kmodlve]");
                            usleep(1800);
                            puts("[  675.367873]  [<ffffffffa0288c53>] ? lve_free_task_hook+0x73/0x110 [kmodlve]");
                            usleep(1800);
                            puts("[  675.368112]  [<ffffffff81084742>] ? delayed_put_task_struct+0x42/0x80");
                            usleep(1800);
                            puts("[  675.368349]  [<ffffffff8110c015>] ? __rcu_process_callbacks+0x135/0x350");
                            usleep(1800);
                            puts("[  675.368583]  [<ffffffff81015089>] ? read_tsc+0x9/0x10");
                            usleep(1800);
                            puts("[  675.368815]  [<ffffffff8110c25b>] ? rcu_process_callbacks+0x2b/0x50");
                            usleep(1800);
                            puts("[  675.369049]  [<ffffffff81087a2d>] ? __do_softirq+0x10d/0x250");
                            usleep(1800);
                            puts("[  675.369285]  [<ffffffff8100c4cc>] ? call_softirq+0x1c/0x30");
                            usleep(1800);
                            puts("[  675.369518]  [<ffffffff810102f5>] ? do_softirq+0x65/0xa0");
                            usleep(1800);
                            puts("[  675.369749]  [<ffffffff8108784d>] ? irq_exit+0xcd/0xd0");
                            usleep(1800);
                            puts("[  675.369981]  [<ffffffff8155139a>] ? smp_apic_timer_interrupt+0x4a/0x60");
                            usleep(1800);
                            puts("[  675.370216]  [<ffffffff8100bcd3>] ? apic_timer_interrupt+0x13/0x20");
                            usleep(1800);
                            puts("[  675.370448]  <EOI>  [<ffffffff8154a582>] ? _spin_lock+0x12/0x30");
                            usleep(1800);
                            puts("[  675.370750]  [<ffffffffa0283e08>] ? tag_list_handle+0x28/0xc0 [kmodlve]");
                            usleep(1800);
                            puts("[  675.370988]  [<ffffffffa0283ee2>] ? tag_list_handler+0x42/0xe0 [kmodlve]");
                            usleep(1800);
                            puts("[  675.371223]  [<ffffffff810ab910>] ? autoremove_wake_function+0x0/0x40");
                            usleep(1800);
                            puts("[  675.371460]  [<ffffffffa0283ea0>] ? tag_list_handler+0x0/0xe0 [kmodlve]");
                            usleep(1800);
                            puts("[  675.371694]  [<ffffffff810ab51e>] ? kthread+0x9e/0xc0");
                            usleep(1800);
                            puts("[  675.371926]  [<ffffffff8100c3ca>] ? child_rip+0xa/0x20");
                            usleep(1800);
                            puts("[  675.372158]  [<ffffffff810ab480>] ? kthread+0x0/0xc0");
                            usleep(1800);
                            puts("[  238.954555] [<8010ffd8>] (unwind_backtrace) from [<8010c240>] (show_stack+0x20/0x24)");
                            usleep(1800);
                            puts("[  238.962413] [<8010c240>] (show_stack) from [<807840a4>] (dump_stack+0xd4/0x118)");
                            usleep(1800);
                            puts("[  238.969832] [<807840a4>] (dump_stack) from [<8011dc34>] (panic+0xf0/0x274)");
                            usleep(1800);
                            puts("[  238.976805] [<8011dc34>] (panic) from [<801225c4>] (complete_and_exit+0x0/0x2c)");
                            usleep(1800);
                            puts("[  238.984218] [<801225c4>] (complete_and_exit) from [<8012265c>] (do_group_exit+0x4c/0xe4)");
                            usleep(1800);
                            puts("[  238.992426] [<8012265c>] (do_group_exit) from [<8012da40>] (get_signal+0x36c/0x6bc)");
                            usleep(1800);
                            puts("[  239.000195] [<8012da40>] (get_signal) from [<8010b2f4>] (do_signal+0xc4/0x3e4)");
                            usleep(1800);
                            puts("[  239.007522] [<8010b2f4>] (do_signal) from [<8010b7fc>] (do_work_pending+0xb8/0xd0)");
                            usleep(1800);
                            puts("[  239.015201] [<8010b7fc>] (do_work_pending) from [<80108094>] (slow_work_pending+0xc/0x20)");
                            usleep(1800);
                            puts("[  239.023497] CPU0: stopping");
                            usleep(1800);
                            puts("[  239.026239] CPU: 0 PID: 0 Comm: swapper/0 Tainted: G         C      4.14.34-v7+ #1110");
                            usleep(1800);
                            puts("[  239.034177] Hardware name: BCM2835");
                            usleep(1800);
                            puts("[  239.037626] [<8010ffd8>] (unwind_backtrace) from [<8010c240>] (show_stack+0x20/0x24)");
                            usleep(1800);
                            puts("[  239.045480] [<8010c240>] (show_stack) from [<807840a4>] (dump_stack+0xd4/0x118)");
                            usleep(1800);
                            puts("[  239.052895] [<807840a4>] (dump_stack) from [<8010e458>] (handle_IPI+0x2bc/0x33c)");
                            usleep(1800);
                            puts("[  239.060398] [<8010e458>] (handle_IPI) from [<801014d8>] (bcm2836_arm_irqchip_handle_irq+0x7c/0xac)");
                            usleep(1800);
                            puts("[  239.069490] [<801014d8>] (bcm2836_arm_irqchip_handle_irq) from [<8079fcbc>] (__irq_svc+0x5c/0x7c)");
                            usleep(1800);
                            puts("[  239.078486] Exception stack(0x80c01ef0 to 0x80c01f38)");
                            usleep(1800);
                            puts("[  239.083605] 1ee0:                                     00000000 00e7df50 397c4000 00000000");
                            usleep(1800);
                            puts("[  239.091899] 1f00: 80c00000 80c03dcc 80c03d68 80c88172 00000001 80b60a30 babffa00 80c01f4c");
                            usleep(1800);
                            puts("[  239.100192] 1f20: 80c04174 80c01f40 80108a4c 80108a50 60000013 ffffffff");
                            usleep(1800);
                            puts("[  239.106902] [<8079fcbc>] (__irq_svc) from [<80108a50>] (arch_cpu_idle+0x34/0x4c)");
                            usleep(1800);
                            puts("[  239.114405] [<80108a50>] (arch_cpu_idle) from [<8079f434>] (default_idle_call+0x34/0x48)");
                            usleep(1800);
                            puts("[  239.122613] [<8079f434>] (default_idle_call) from [<801611cc>] (do_idle+0xd8/0x150)");
                            usleep(1800);
                            puts("[  239.130379] [<801611cc>] (do_idle) from [<801614e0>] (cpu_startup_entry+0x28/0x2c)");
                            usleep(1800);
                            puts("[  239.138058] [<801614e0>] (cpu_startup_entry) from [<80799184>] (rest_init+0xbc/0xc0)");
                            usleep(1800);
                            puts("[  239.145915] [<80799184>] (rest_init) from [<80b00df8>] (start_kernel+0x3d4/0x3e0)");
                            usleep(1800);
                            puts("[  239.153503] CPU3: stopping");
                            usleep(1800);
                            puts("[  239.156245] CPU: 3 PID: 0 Comm: swapper/3 Tainted: G         C      4.14.34-v7+ #1110");
                            usleep(1800);
                            puts("[  239.164182] Hardware name: BCM2835");
                            usleep(1800);
                            puts("[  239.167631] [<8010ffd8>] (unwind_backtrace) from [<8010c240>] (show_stack+0x20/0x24)");
                            usleep(1800);
                            puts("[  239.175486] [<8010c240>] (show_stack) from [<807840a4>] (dump_stack+0xd4/0x118)");
                            usleep(1800);
                            puts("[  239.182901] [<807840a4>] (dump_stack) from [<8010e458>] (handle_IPI+0x2bc/0x33c)");
                            usleep(1800);
                            puts("[  239.190402] [<8010e458>] (handle_IPI) from [<801014d8>] (bcm2836_arm_irqchip_handle_irq+0x7c/0xac)");
                            usleep(1800);
                            puts("[  239.199492] [<801014d8>] (bcm2836_arm_irqchip_handle_irq) from [<8079fcbc>] (__irq_svc+0x5c/0x7c)");
                            usleep(1800);
                            puts("[  239.208487] Exception stack(0xb9d27f38 to 0xb9d27f80)");
                            usleep(1800);
                            puts("[  239.213606] 7f20:                                                       00000000 00062a7c");
                            usleep(1800);
                            puts("[  239.221900] 7f40: 397f7000 00000000 b9d26000 80c03dcc 80c03d68 80c88172 00000001 410fd034");
                            usleep(1800);
                            puts("[  239.230193] 7f60: 00000000 b9d27f94 80c04174 b9d27f88 80108a4c 80108a50 60000013 ffffffff");
                            usleep(1800);
                            puts("[  239.238490] [<8079fcbc>] (__irq_svc) from [<80108a50>] (arch_cpu_idle+0x34/0x4c)");
                            usleep(1800);
                            puts("[  239.245992] [<80108a50>] (arch_cpu_idle) from [<8079f434>] (default_idle_call+0x34/0x48)");
                            usleep(1800);
                            puts("[  239.254199] [<8079f434>] (default_idle_call) from [<801611cc>] (do_idle+0xd8/0x150)");
                            usleep(1800);
                            puts("[  239.261964] [<801611cc>] (do_idle) from [<801614e0>] (cpu_startup_entry+0x28/0x2c)");
                            usleep(1800);
                            puts("[  239.269641] [<801614e0>] (cpu_startup_entry) from [<8010df50>] (secondary_start_kernel+0x130/0x13c)");
                            usleep(1800);
                            puts("[  239.278819] [<8010df50>] (secondary_start_kernel) from [<0010196c>] (0x10196c)");
                            usleep(1800);
                            puts("[  239.286140] CPU1: stopping");
                            usleep(1800);
                            puts("[  239.288881] CPU: 1 PID: 0 Comm: swapper/1 Tainted: G         C      4.14.34-v7+ #1110");
                            usleep(1800);
                            puts("[  239.296819] Hardware name: BCM2835");
                            usleep(1800);
                            puts("[  239.300268] [<8010ffd8>] (unwind_backtrace) from [<8010c240>] (show_stack+0x20/0x24)");
                            usleep(1800);
                            puts("[  239.308122] [<8010c240>] (show_stack) from [<807840a4>] (dump_stack+0xd4/0x118)");
                            usleep(1800);
                            puts("[  239.315536] [<807840a4>] (dump_stack) from [<8010e458>] (handle_IPI+0x2bc/0x33c)");
                            usleep(1800);
                            puts("[  239.323038] [<8010e458>] (handle_IPI) from [<801014d8>] (bcm2836_arm_irqchip_handle_irq+0x7c/0xac)");
                            usleep(1800);
                            puts("[  239.332126] [<801014d8>] (bcm2836_arm_irqchip_handle_irq) from [<8079fcbc>] (__irq_svc+0x5c/0x7c)");
                            usleep(1800);
                            puts("[  239.341121] Exception stack(0xb9d23f38 to 0xb9d23f80)");
                            usleep(1800);
                            puts("[  239.346240] 3f20:                                                       00000000 007f534c");
                            usleep(1800);
                            puts("[  239.354533] 3f40: 397d5000 00000000 b9d22000 80c03dcc 80c03d68 80c88172 00000001 410fd034");
                            usleep(1800);
                            puts("[  239.362826] 3f60: 00000000 b9d23f94 80c04174 b9d23f88 80108a4c 80108a50 60000013 ffffffff");
                            usleep(1800);
                            puts("[  239.371122] [<8079fcbc>] (__irq_svc) from [<80108a50>] (arch_cpu_idle+0x34/0x4c)");
                            usleep(1800);
                            puts("[  239.378624] [<80108a50>] (arch_cpu_idle) from [<8079f434>] (default_idle_call+0x34/0x48)");
                            usleep(1800);
                            puts("[  239.386831] [<8079f434>] (default_idle_call) from [<801611cc>] (do_idle+0xd8/0x150)");
                            usleep(1800);
                            puts("[  239.394597] [<801611cc>] (do_idle) from [<801614e0>] (cpu_startup_entry+0x28/0x2c)");
                            usleep(1800);
                            puts("[  239.402273] [<801614e0>] (cpu_startup_entry) from [<8010df50>] (secondary_start_kernel+0x130/0x13c)");
                            usleep(1800);
                            puts("[  239.411448] [<8010df50>] (secondary_start_kernel) from [<0010196c>] (0x10196c)");
                            usleep(1800);
                            puts("[  239.418781] ---[ end Kernel panic - not syncing: Attempted to kill init! exitcode=0x0000000b");
                            sleep(3);
                            system("clear");
                            puts("they're watching.");
                            sleep(1);
                            system("clear");
                            printf("Please confirm your name is %s (Y/N)", name);
                            scanf(" %c", &ch);
                            while(tolower(ch) != 'y' && tolower(ch) != 'n')
                            {
                                puts("invalid input");
                                printf("Please confirm your name is %s (Y/N)", name);
                                // lazy, program loops forever if invalid input
                                break;
                            }
                            if(tolower(ch) == 'n')
                            {
                                int choice2;
                                printf("Oh, then what is your name? \n");
                                fflush(stdout);
                                scanf("%s", name2);
                                puts("So you lied.");
                                puts("1. Yes.");
                                puts("2. No.");
                                scanf(" %d", &choice2);
                                switch(choice2)
                                {
                                    case 1:
                                        puts("Ah, What a shame.");
                                        puts("Atleast you ended up saying the ");
                                        sleep(2);
                                        system("clear");
                                        puts("truth.");
                                        sleep(1);
                                        //32*2^2
                                        puts("YVxbn6u3UoRcj+HFeuuQ/oMYRrg6BWU1ZF+lfBQKzfUBdfyOt31uSbGLdKPP4X7ZIwwU0HTveMi5VtZOTwd0ctCvx31P4ZZW6U5XmUKzGP+tbqQ4/bS0fW4/E4rD6FVJtNMU+R9NlMhxnn2UKYjFPws4r8TWRvT0tePtZZRYf05jry9J8nZDabjD4tLYt9D/PTJN2Ltvtg8y0RtWR77xhqBBchBfRYJiZF9irSpTGuAEy4mjAr7SBCG1i1Lr16i0");
                                        sleep(1);
                                        system("clear");
                                        exit(0);
                                    case 2:
                                        puts("Yes you did.");
                                        // Get Hostname and print it
                                        fp = popen("whoami", "r");
                                        // lazy error handling for fp
                                        if(fp == NULL)
                                        {
                                            puts("error in popen (whoami). exiting");
                                            exit(0);
                                        }
                                        fgets(hostname, 256, fp);
                                        // remove endline character
                                        hostname[strlen(hostname)-1]='\0';
                                        // Print hostname
                                        printf("%s", hostname);
                                        pclose(fp);

                                        puts(" why would you lie?");
                                        sleep(2);
                                        printf("1. How did you");
                                        for(i = 0; i < 3; i++)
                                        {
                                            printf(".");
                                            fflush(stdout);
                                            sleep(1);
                                        }
                                        system("clear");
                                        break;
                                    default:
                                        puts("not a choice. goodbye.");
                                        exit(0);
                                }
                            }
                            if(tolower(ch) == 'y')
                            {
                                printf("No, ");

                                // Get Hostname and print it
                                fp = popen("whoami", "r");
                                // lazy error handling for fp
                                if(fp == NULL)
                                {
                                    puts("error in popen (whoami). exiting");
                                    exit(0);
                                }
                                fgets(hostname, 256, fp);
                                // remove endline character
                                hostname[strlen(hostname)-1]='\0';
                                // Print hostname
                                printf("%s", hostname);
                                pclose(fp);

                                puts(" why would you lie?");
                                sleep(2);
                                printf("1. How did you");
                                for(i = 0; i < 3; i++)
                                {
                                    printf(".");
                                    fflush(stdout);
                                    sleep(1);
                                }
                                system("clear");
                                break;
                            }
                            //puts("Press Control + c to exit.");
                        }
                        if(choice == 2)
                        {
                            puts("you feel hopeless.");
                            puts("");
                        }
                    }
                    break;
                }
            case 2: // Justin Do Room 2
		{
			while(choice != 99)
			{
				puts("Welcome to room 2. Glad you didn't drown. \n");
				puts("You open the door and see a mirror at the end of the room.\n");
				puts("As you walk toward the mirror, the doorknob is freezes and out comes a math wizard!!\n");
				puts("The math wizard then states that you have 3 challenges to pick from in order to leave the room\n");
				puts("1. Count Characters.\n");
				puts("2. Add Numbers.\n");
				puts("3. Switching Numbers.\n");
				puts("4. Drop and play dead on the floor and hope the wizard falls for it.\n");
				scanf("%d",&choice);
				if(choice == 1)
				{
					casecheck();
				}
				if(choice == 2)
				{
					readfile();
				}
				if(choice == 3)
				{
					randomfill();
				}
				if(choice == 4)
				{
					puts("Why would you even try......\n");
					puts("----- GAME OVER -----\n");
				}
				choice = 99;
			}
			break;
		}
             case 3:
                {
                	int playerHp = 10;
			int playerInv[10];
			int playerGold = 0;
			int hitChance = 0;
			while(choice != 99)
			{
				puts("You open the door and find some strange looking creatures. ");
				puts("The creatures look like walking cactuses. One of them appears to have a flower on it's head. They see you but do nothing. ");
				puts("The cactus creatures wiggle their bodies, as if they are dancing. They look harmless, but you feel as though they are looking at you menacing. ");
				puts("You also notice a treasure chest not too far away from the creatures, completely unguarded.\n");
				puts("You have three choices:\n");
				puts("1. Interact with the cactuses creatures.\n");
				puts("2. Go and open the treasure chest.\n");
				puts("3. Continue to the next room.\n");
				scanf("%d",&choice);
				if(choice == 1)
				{
					puts("You approach the cactus creatures cautiously. The creatures notice your presense again and circle around you. ");
					puts("Their constant wiggling makes you dance with them. What do you want to do?");
					puts("1. Dance with them. \n");
					puts("2. Attack them. \n");
					scanf("%d",&choice);
					if(choice == 1)
					{
						puts("You move your body just like the cactus creatures. They seem happy that you decided to dance with them.");
						puts("One of them offers you a flower. You take the nice gift.");
						puts("You got the Cactus Flower!");
						playerInv[0] = 1;
						puts("The cactus creatures wave good bye as you leave the room.\n");
					}
					else if(choice == 2)
					{
						puts("You try to attack the cactus creatures. Surprisingly, they nimbly avoid your attacks.");
						puts("The cactus creatures point their arms toward you and suddenly shoot their thorns at you!");
						puts("You try to dodge, but you lose your balance and get hit!");
						x = (rand() % 9) + 1;
						printf("You take %d damage!",x);
						puts("You run out of the room covered in cactus thorns.\n");
					}
				}
				else if(choice == 2)
				{
					puts("You ignore the creatures and head toward the treasure chest.");
					x = (rand() % 100) + 1;
					playerGold = x;
					printf("You open it and find %d gold inside! You put the gold into your bag.",playerGold);
					puts("You hear something hit the top of the chest and notice cactus thorns have pierced the chest.");
					puts("The cactus creatures have fired their thorns at you and readying to fire again! What do you do?");
					puts("1. Run away!");
					puts("2. Fight back!");
					scanf("%d",&choice);
					if(choice == 1)
					{
						puts("You make a mad dash to the exit as cactus thorns fly by your head.");
						puts("You narrowly avoid getting hit as the jump through the door.");
						puts("You feel your bag and notice some gold fell out!");
						playerGold = playerGold - x;
						printf("You lost %d gold!",playerGold);
						puts("At least you made it out alive.\n");
					}
					else if(choice == 2)
					{
						puts("You take one of the nearby cactus thorns and throw it back at the cactus creatures!");
						hitChance = x;
						if(hitChance >= 50)
						{
							puts("You hit one of cactus creatures! It runs away in pain, followed by the others.");
							puts("You see that the cactus creatures left behind a flower.");
							puts("You take it as a trophy");
							puts("You got the Cactus Flower!");
							playerInv[0] = 1;
							puts("You leave the room, happy and full of spoils.");
						}
						else if(hitChance < 50)
						{
							puts("You miss and get hit by another thorn!");
							y = (rand() % 10) + 1;
							playerHp = playerHp - y;
							if(playerHp <= 0)
							{
								puts("You die, full of cactus thorns.");
							}
						}
					}
				}
				else if(choice == 3)
				{
					puts("You decide that this room is not worth your time and leave.\n");
				}
				break;
			}
			break;
		}
		break;
            case 4: // Edgar Baheha
			{
					while(choice != 99)
					{
							puts("You decided to open the 4th door,"
								" and you are given 3 more choice."
								" The door closes behind you leaving you"
								" alone to forcably choose a door in order to continue."
								" Each door states a given possiblity"
								" if chosen. The choices are as follow: \n"
								"1. This Door with give you the ability to"
								" understand the 'Truth' of all things\n" 
								"2. This Door will give you the ability to"
								" become 'Untouchable'\n"
								"3. This Door will offer you a chance to 'Redo'"
								" any event you encounter.\n");
							puts("You seem to be hesitant as you decide to choose a door,"
							"but are overwhelmed by the reward that you ignore any consequence");
							puts("Enter the door you choose to continue: ");							
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You know everyone and everything."
									"You understand the knowledge of the universe "
									"and humanities purpose, "
									"however it came with a price. "
									"You lose your own benevolence and emotions.\n");
								puts("As you become an emotionless human-being, you understand what you must do, "
									"and in order to fulfill your existance you must exit this place.");
								puts("You continue into the darkness and encounter several beings, some which seem "
									"to be attracted toward you. You have two choices that you may choose from: \n");
								puts("1- Communicate with the group in order to gain allies to help on your journey.\n"
									"2- Offer salvation and destory them.\n");
								scanf("%d",&choice);
								
								if(choice == 1)
								{
									puts("you have gained two allies, a Skeleton Soldier and a Wolf. \n");
									puts("You talk with your aillies, learning more about their existance "
										"and daily attributes"); 
									puts("As you continue on your journey you finally encounter the final door. ");
									puts("you are given 2 more choices: \n");
									puts("1 - kill off your allies to exit\n"
										"2 - Offer your intellect instead\n");
									scanf("%d",&choice);
								
									if(choice == 1)
									{
										puts("You now have to play a game and win.");
										int start;
										puts("Guess my riddle right and you live, however, if you fail, you will be defeated");
										puts("Enter 1 to continue: ");
										scanf("%d",&start);
										
										if(start == 1)
										{
											puts("Never resting, never still.");
											puts("Moving silently from hill to hill.");
											puts("It does not walk, run or trot, All is cool where it is not.");
											puts("What is it?"); 
											puts("Hint:(No spaces and capitals, example: sun)");
											puts("Enter the answer in 10 or less characters: ");
											char guess[11];
											char answer[20] = "sunshine";
											scanf("%s", guess);
											int i;
											
											
											for(i = 0; i < 8; i++)
											{
												
											
												if(guess[i] == answer[i])
												{
													puts("You have passed, you escaped!");
													break;
												}
												else
												{
													puts("you failed, you have died");
													break;
												}
											}
										}
										else
										{
											puts("Wrong input, try again");
										}
										
									}
									else if(choice == 2)
									{
										puts("You gave up knowledge in exchange for friendship. "
											"Although you know you did the right thing, you can't "
											"help but think that knowlege was greater than friendship. ");
										puts("YOu face the final door and must accept the challenge in order to leave.");
										srand(time(NULL));
										int i, j, x;
										int count = 0;
												
										puts("You will begin to roll a dice 3 times.");
										puts("You must get 4 or greater twice in order to win.");
										puts("Enter 1 to begin: ");
										scanf("%d",&x);
											
											if(x == 1)
											{
												for(i = 0; i < 3; i++)
												{
													j = RolltheDiceman();
													if(j >=4)
													{
														count++;
													}
												}
												if(count < 2)
												{
													puts("You couldn't get 4 or greater twice, you failed!");
													puts("You died an incredibility painful death.");
												}
												else
												{
													puts("You managed to win, congratz you're free!");
												}
											}
											else
											{
											puts("You have died due to failing to follow orders");
											}
									}
								}
								else if(choice == 2)
								{
									puts("The mysteries group has been defeated");
									puts("You begin to organize a team");
									puts("You want to make sure you have everyone organized and ready");
									unsigned int num;
									unsigned int rank;
									double power;
									char name[30];
									FILE *reads;
									FILE *writes;
									
									puts("Create a file called input.txt");
									puts("Write the rank, name, and power level of any characters you can think of.");
									puts("Ranks are from 1-10, power is from 1.0 - 10.0");

									writes = fopen("output.txt", "w");
									if(writes == NULL)
									{
										puts("Error reading file!");
										exit(0);
									}
									reads = fopen("input.txt", "r");
									if(reads == NULL)
									{
										puts("File could not be opened!");
									}
									else
									{
										puts("You are viewing your teams power level.");
										printf("%s", "Enter a choice to do the following: \n"
											"1 - List the characters LOWER rank (4 OR LESS).\n"
											"2 - List the characters in terms of HIGH power (5 OR GREATER).\n"
											"3 - who cares\n");
										scanf("%u", &num);
										
										while(num != 3)
										{
											fscanf(reads,"%d%s%lf",&rank, name,&power);

											switch (num)
											{
												case 1:
													puts("List the characters in terms of rank: \n");
													while(!feof(reads))
													{
														if(rank < 5)
														{
															printf("%d%s\n",rank,name);
															fprintf(writes, "%d%s\n",rank,name);
														}
														fscanf(reads,"%d%s\n",&rank,name);
													}
												break;
											
												case 2:
													puts("Listing the characters in terms of power: \n");
													while(!feof(reads))
													{
														if(power > 4)
														{
															printf("%f%s\n",power,name);
															fprintf(writes,"%f%s\n",power,name);
														}
														fscanf(reads,"%lf%s\n",&power,name);
													}
												break;
											}
										rewind(reads);
										puts("Enter another choice: ");
										scanf("%d",&num);
										}
										puts("You have listed what you wanted");
										puts("You may leave now, you are free!");
										fprintf(writes, "%d", num);
										fclose(reads);
										fclose(writes);
									}
																	
								} 
								else
								{
									puts("Wrong choice");
									
								}								
							}
							else if(choice == 2)
							{
								puts("You became a being with pure energy."
									"You lost your phyical body and transcended "
									"into a higher plane. "
									"You lost the feeling of touch ,but gained "
									"unreachable power ");
								puts("As you continue on your jorney, you come unto a cross-road "
									"where yuo can decide to choose which one to take: \n");
								puts("1- the left path\n"
									"2- the right path\n");
					  			scanf("%d",&choice);
								if(choice == 1)
								{
									puts("You came upon a lake, you decided to absorb the water with ur new found power. "
										"You soon realize that your only weakness is water.");
									puts("The consequence of your actions led to your death");
									puts("The End."	);
								}
								if(choice == 2)
								{
									puts("You approach a light. It gazes upon you ever so brightly.");
									puts("It's brighter than your own self, and a voice slowly let's you know");
									puts("You have dead the moment you turned into this being and now you must suffer the 											consequences");
									puts("You have already died");
									puts("The End");
								}
			
								
							}
							else if(choice == 3)
							{
								puts("You have the power to reverse time."
									"You gained an increable ability, however as you soon"
									"come to understand, each time you"
									"reverse time, someone close to you dies."
									"You start to question why you chose this door"
									"and begin to feel extreemly guilty for killing"
									"these people");
								puts("You start walking toward a river");
								puts("You decide two choices:");
								puts("1-Follow the river\n" "2-camp for the night\n");
								scanf("%d",&choice);
								if(choice == 1)
								{
									puts("you decided to follow the river.");
									puts("You hear something strange and suddenly the river begins to flood");
									puts("you slowly drown and are faced with a dilemma");
									puts("You have died due to drowing");
									puts("The End");
								}
								if(choice == 2)
								{
									puts("You decided to camp for the night");
									puts("You began to read your book and slowly hear sounds coming from outside the tent");
									puts("You soon discover a dragon has appeared!");
									puts("As you combat it with your redo power, the dragon asks a riddle");
									puts("It asks to guess a number and if correct, he will leave you alone");
									int x, mult, add, sub, y;
									int magic = 5;	
									puts("Pick a number from 1-4 in order to defeat the dragon");
									scanf("%d",&x);
									
										if(x < 5 && x > 0)
										{
										mult = x * magic;
										printf("%d * magicnum = %d \n", x, mult);
										add = x + magic;
										printf("%d + magicnum = %d\n", x, add);
										sub = x - magic;
										printf("%d - magicnum = %d\n", x, sub);
										
										puts("Guess my number or else: ");
										scanf("%d",&y);
											if(y == magic)
											{
												puts("You win! Next time you wont be lucky");
											}
											else
											{
												puts("You have died!");
											}
										}
										else
										{
											puts("You can't follow rules huh, guess you died");
										}
								}
							}
							else
							{
								puts("You failed to follow orders, By the power bestowed upon me by the "
									"Great Garrett Poppe you will DIE!!!!\n");
								printf("%s",name);
								puts(" has died.");
						
							}
					choice = 99;
					}
					break;
			}
            case 5:
                {
		    FILE *fileptr;
		    int power = 5;
		    int i;
		    int diceroll;
		    int randomNumber;
		    int numbers[10];	    
                    srand(time(NULL));
		    fileptr = fopen("adventure.txt", "w");
                    while(choice != 99)
                    {
			fprintf(fileptr,"Hello %s, you have started out with 5 power. Below is a recap of your adventure.\n", name);
                        puts("You open the door and find a treasure chest.\n");
                        puts("You have 2 choices listed below. Choose carefully.\n");
                        puts("1. Open the chest.\n");
                        puts("2. Leave the chest and move on.\n");
                        scanf("%d",&choice);
                        if(choice == 1)
                        {
			    fprintf(fileptr, "You opened a chest and find a golden dice hidden inside.\n");
                            puts("You open the chest and find a golden dice hidden inside.\n");
                            puts("You have 2 choices listed below. Choose carefully.\n");
                            puts("1. Roll the dice.\n");
                            puts("2. Pocket the dice.\n");
                            scanf("%d", &choice);
                            if(choice == 1)
                            {
                                diceroll = 1 + (rand() % 6);
                                printf("Congratulations! You rolled a %d. Your strength is increased by %d\n", diceroll, diceroll);
				power = power + diceroll;
				fprintf(fileptr, "You chose to roll the dice. Lucky you! You rolled a %d. Your strength is increased to %d.\n", diceroll, power);
                                puts("You move on with your journey. Ahead you encounter a giant orc with heavy armor. Between you and the orc is a sword.\n");
                                puts("You have 3 choices listed below. Choose carefully.\n");
                                puts("1. Pick up the sword and combat the orc.\n");
                                puts("2. Run up and punch the orc.\n");
                                puts("3. Run away.\n");
                                scanf("%d", &choice);
				if (choice == 1)
				{
					fprintf(fileptr, "You pick up the sword and fight the orc, but too bad your sword broke and you died.\n");
					puts("You pick up the sword and start to combat the orc. Your sword breaks and the orc bashes your head in.\n");
					puts("*****_____ GAME OVER ______*****\n");
					puts("Check adventure.txt for an adventure recap.\n");
					fclose(fileptr);
					exit(0);
				}
				else if (choice == 2)
				{
					puts("You run up and punch the orc.\n");
					if(power < 8)
					{
						puts("Your fist broke to the sheer muscle of the orc and the orc picks you up and chomps your had off.\n");
						puts("*****_____ GAME OVER ______*****\n");
						fprintf(fileptr, "How unlucky of you...your power was not strong enough to kill the orc in one punch. You became a tootsie roll pop for the orc\n");
						puts("Check adventure.txt for an adventure recap.\n");
						fclose(fileptr);
						exit(0);
					}
					else
					{
						fprintf(fileptr,"You punched the orc...and it blew up...disgusting. At least a random door lied ahead of the orc.\n");
						puts("You punch the orc and his whole body shatters into blood and chunks.\n");
						puts("You walk down a bit more and you find a door down the path and it is asking you for any number between 1 and 100. Answer wisely.\n");
						scanf("%d", &randomNumber);
						for(i = 0; i < 10; i++)
						{
							numbers[i] = 1 + (rand() % 100);
						}
						if(randomNumber > 1 && randomNumber < 100)
						{
							if(randomNumber == numbers[i])
							{
								printf("You yell the number %d at the door, it magically opens and you find your way out of the dungeon.\n", randomNumber);
								puts("Congratulations. You won!\n");
								fprintf(fileptr,"Your opened the door with your magic number and escape the dungeon. Congratulations you win.\n");
								fprintf(fileptr, "The numbers to open the doors were:\n");
								for(i = 0; i < 10; i++)
								{
									fprintf(fileptr, "%d\t", numbers[i]);
								}
								puts("Check adventure.txt for an adventure recap.\n");
								fclose(fileptr);
								exit(0);
							}
							else
							{
								printf("%d does not match %d\n", numbers[i]);
							}
						}
						else
						{
							puts("A huge spike trap falls from the ceiling and kills you.\n");
							puts("*****_____ GAME OVER _____*****\n");
							fprintf(fileptr, "You died because you didn't follow the rules. Guess that's what you get for not following the rules.\n");
							puts("Check adventure.txt for an adventure recap.\n");
							fclose(fileptr);
							exit(0);
						}
						puts("Guess you didn't guess a correct number.\n");
						puts("You become stuck in the dungeon. No food. No other signs of life. You die a lonely death.\n");
						puts("*****_____ GAME OVER _____*****\n");
						puts("Check adventure.txt for an adventure recap.\n");
						fprintf(fileptr, "Sucks to be you...dying a lonely death because you couldn't guess a random number.\n");
						fclose(fileptr);
						exit(0);
					}
				}
				else if (choice == 3)
				{
			       		 puts("You attempt to run away.\n");
                              	 	 puts("The orc quickly catches up and smashes your head.\n");
                              		 puts("*****_____ GAME OVER _____*****\n");	
		 			 fprintf(fileptr,"You attempted to run from the orc. What were you thinking, your legs are half the length of its. Well you died.\n");
					 puts("Check adventure.txt for an adventure recap.\n");																	     fclose(fileptr);
					 exit(0);
				}

                            }
                            else if(choice == 2)
                            {
                                puts("You move on with your journey. Ahead you encounter a giant orc with heavy armor. Between you and the orc is a sword.\n");
                                puts("You have 3 choices listed below. Choose carefully.\n");
                                puts("1. Pick up the sword and combat the orc.\n");
                                puts("2. Roll the dice.\n");
                                puts("3. Run away.\n");
				scanf("%d", &choice);
				if(choice == 1)
				{
					fprintf(fileptr, "You pick up the sword and fight the orc, but too bad your sword broke and you died.\n");
					puts("You pick up the sword and start to combat the orc. Your sword breaks and the orc bashes your head in.\n");
					puts("*****_____ GAME OVER ______*****\n");
					puts("Check adventure.txt for an adventure recap.\n");
					fclose(fileptr);
					exit(0);
				}
				else if(choice == 2)
				{
					puts("You attempt the roll the dice while the orc is looking at you.\n");
					puts("The orc runs up and smashes your head in. Your dice falls on the ground.\n");
					diceroll = 1 + (rand() % 6);
					puts("*****_____ GAME OVER _____*****\n");
					fprintf(fileptr, "Well you died, but if you would have lived, you would have rolled a %d.\n", diceroll);
					puts("Check adventure.txt for an adventure recap.\n");
					fclose(fileptr);
					exit(0);
				}
				else if (choice == 3)
				{
					 puts("You attempt to run away.\n");
                              	 	 puts("The orc quickly catches up and smashes your head.\n");
                              		 puts("*****_____ GAME OVER _____*****\n");	
		 			 fprintf(fileptr,"You attempted to run from the orc. What were you thinking, your legs are half the length of its. Well you died.\n");
					 puts("Check adventure.txt for an adventure recap.\n");
					 fclose(fileptr);
					 exit(0);
				}

                            }
                        }
                        else if(choice == 2)
                        {
                            puts("You leave the chest and move on. Standing before you is a giant orc with heavy armor. Between you and the orc is a sword.\n");
                            puts("You have 2 choices listed below. Choose carefully.\n");
                            puts("1. Pick up the sword and combat the orc.\n");
                            puts("2. Run away.\n");
                            scanf("%d", &choice);
                            if (choice == 1)
                            {
				fprintf(fileptr, "You pick up the sword and fight the orc, but too bad your sword was shorter than the orc's club, so you died.\n");
                                puts("You pick up the sword and charge at the orc.\n");
                                puts("Before you could hit the orc with your sword the orc swings down with its club.\n");
                                puts("Your head gets smashed.\n");
                                puts("*****_____ GAME OVER _____*****\n");
				puts("Check adventure.txt for an adventure recap.\n");
				fclose(fileptr);
				exit(0);
                            }
                            else if (choice == 2)
                            {
                                puts("You attempt to run away.\n");
                                puts("The orc quickly catches up and smashes your head.\n");
                                puts("*****_____ GAME OVER _____*****\n");
				fprintf(fileptr,"You attempted to run from the orc. What were you thinking, your legs are half the length of its. Well you died.\n");
				puts("Check adventure.txt for an adventure recap.\n");
				fclose(fileptr);
				exit(0);
			    }
                        }
                    }
                    break;
                }
            case 6:
                {
		int chinchinmeter = 0, chinchinprox = 50, random = 0, prometheus = 0, newChoice = 0, gamVal = 0, gbVal = 0, vodka = 0, cookbook = 0,skip = 0;
		char userInput[20], userAnswer[20] = "number",paper[20],papaAsked[20] = "fakefrank";
		FILE *fptr;
		srand(time(NULL));
               	while(choice != 99)
		{
			puts("You open the door to find a man wearing sunglasses, track pants, and a blue shirt with a ravioli stain on his shirt pocket standing in a very small small room.");
			puts("There also seems to be a man with eyes drawn over his eyelids wearing a black skin suit sitting in the corner of the room reading smut magazines");
			puts(" ");
                        puts("Welcome to the filthy frank show! Where everything is filthy and filled with terrible pop culture references.");
			puts("My name is Franis of the Filth and I will be the only thing you will be interacting from now on");
                        puts("If you want to make it out alive, just answer my questions and you'll be safe from dark lord chin chin");
			puts(" ");
			puts("OH YEA! Here's a little twist for you! Being the perfectionist I am, if you end up making mistakes the dark lord chin chin will be following you one step closer.");
			puts("And if he gets close to you then that means......");
			puts(" ");
			puts("*he dabs in japanese*");
			puts(" ");
			puts("THE DEATH PENALTY");
			puts(" ");
			puts("BUT IF YOU DON'T FOLLOW MY INSTRUCTIONS THEN YOU JUST DIE MAN");
			puts("So without further ado, lets get it started!");
			puts(" ");
                        puts("Question:  If Pewdiepie reached 80 million subscribers, will the ravioli stick to the ceiling?");
                        puts("1. Wait what?");
                        puts("2. Youtube's reccomended algorithm is garbage!");
                        puts("3. 34 chromonsones");
                        scanf("%d",&choice);
                        if (choice == 1)
		       	{
                            puts("YOU OBVIOUSLY WEREN'T LISTENING!!! BACK TO THE RICEFIELDS FOR YOU!!!");
                        }
                        else if (choice == 2)
                        {
                            puts("Yes, youtubes algorithm is pretty bad and they do demonetize my content, BUT IT ISN'T THE RIGHT ANSWER PUNK!!!");
                        }
                        else if (choice == 3)
                        {
                            puts("I can't believe you try bribing me. You should be so damn ashamed.  Lucky for you though, I take bribes!");
                            puts("He pockets the chromosones");
			    chinchinmeter = chinchinmeter + 10;
			    puts("So now that you have correctly bri.....er I mean answered my trivia, I will set up another stage to test your worth.");
                        }
                        else
                        {
                            puts("YOU DIDN'T FOLLOW MY INSTRUCTIONS FOOL!!");
			    break;
                        }
			puts("What I have in my hand is a fragment of Prometheus's chromosones.");
			puts("The poor idiot lent it to me for safekeeping, but I think im gonna use it as a bargaining chip");
			puts("I bet you're asking what do I need to do to get that?");
			puts("WELL GUESS WHAT NERD! YOU NEED TO COMPLETE A CERTAIN PROBLEM IN ORDER TO GET THIS");
			puts("HERE IS THE PROBLEM");
			puts("Enter number. from 1 to 10");
			scanf("%s",userInput);
			if(strcmp(userInput, userAnswer) == 0)
			{
				puts("Wow You saw right through me you pervert!!");
				puts(" ");
				puts("BUT STILL! I am impressed that you figured it out");
				puts("*You obtain prometheus's chromosones");
				prometheus = prometheus + 1;
			}
			else
			{
				puts("I don't blame you if this one is too hard and I feel sorry, but chinchin is evil incarnate and probably doens't care about your wimpy feelings");
				chinchinmeter = chinchinmeter - 5;
			}
			puts(" ");
			puts("Alright you stupid idiot, I kinda feel bad for confusing you like i confuse my right hand for my left one");
			puts("So here's the deal!  I will give you kanye's yeezys which will slow down lord chin chin from catching up to you.");
			puts("However, all you gotta do is guess what number what I'm thinking of from 1 to 10.  HOwever you get only one shot at this.  SOUNDS GOOD RIGHT??");
			puts("Don't worry, I won't trick you again like last time");
			puts("......");
			puts("What? what do you need yeezys for? WELL TO RUN OF COURSE YOU IDIOT");
			puts(".......");
			puts("Whats that now? This makes no sense since chin chin is actually sitting in the corner of the room reading dirty magazines?");
			puts("..........");
			puts("and you're saying that this particular room 6 has no meaningful plot or storytelling and seems like something a college student would write up a day before the assignments due??");
			puts("..............");
			puts("Look buddy, you need to shut the hell up or lord chin chin will walk 3 steps over here and whoop your ass. So do you want the yeezys or not?");
			puts("...");
			puts("That's what I thought you stupid eggplant");
			puts(" ");
			puts("What number am I guess as of right now?");
			scanf("%d", &newChoice);
			random = 1 + (rand() % 9);
			if(random == newChoice)
			{
				puts("Good job you awkward thing you.  Now Lord chin chin will move his chair a few feet away from you now");
				puts("*Chin chin scoots his chair a few feet away from you*");
				puts("oh and here's your yeezy's too I guess");
				puts("*he hands you a pair of used garbage(its a joke you yeezy loving snowflakes)*");
				chinchinmeter = chinchinmeter - 5;
			}
			else
			{
				puts("YOU WIN SOME YOU LOSE SOME PAL!! THATS HOW THE REAL WORLD WORKS");
			}
			puts(" ");
			puts("Don't feel too bad you loser");
			puts("You know what lets make this more fun");
			puts("I will offer 2 more items in your quest to avoid the dark lord chin chin");
			puts("One is a japanese cookbook written entirely in japanese subtitles.");
			puts("The other is a bottle of vodka");
			puts("There will be 2 objects, I will judge how you will interact with them. Do it right and I will reward you the items.");
			puts(" ");
			puts("*You wonder what the bottle of vodka is for and hope that you win it because you are really thirsty right now (really?)*");
			puts(" ");
			puts("Here's another I should tell you. You'll find that there will be an option to GAMBLE from here on out!");
			puts("What it effectively does is that you can actually increase your chance of avoiding chin chin");
			puts("HOWEVER! Since it is gambling, there is a chance to increase your chance of running into chin chin");
			puts(" ");
			puts("Enough talk! Lets go boyeeeee");
			puts(" ");
			puts("*There is a box in front of you. Francis beckons you to do something to it");
			puts("1.Observe the box");
			puts("2.Kick the box");
			puts("3.GAMBLE *This action will skip out on the current mission and any items associated with the mission*");
			scanf("%d", &newChoice);
			if(newChoice == 1)
			{
				puts("You took a good look at the box");
				puts("You conclude that the box is pretty well made");
				puts("Francis decides to reward you for your good observations");
				chinchinmeter = chinchinmeter + 10;
				puts("You also earned the cookbook as well");
				cookbook = cookbook + 1;

			}
			else if(newChoice == 2)
			{
				puts("You kicked the box");
				puts("You injured your leg while doing so");
				puts("Apparently there is something hard in the box");
				puts("Since you injured your leg, chin chin may catch up to you");
				chinchinmeter = chinchinmeter - 5;
			}
			else if(newChoice == 3)
			{
				puts("You ignored the box and tried to gamble!");
				gamVal = gambleRandom();
				gbVal = 1 + (rand() % 9);
				if(gbVal >= 6)
				{
					puts("Wow getting a bit lucky are we!");
					puts("*chin chin looks at you with disgust*");
					chinchinmeter = chinchinmeter + gamVal;
				}
				else if(gbVal < 6)
				{
					puts("You're a terrible gambler!");
					puts("*chin chin scoots his chair a little closer to you with a triumphant look in his eyes*");
					chinchinmeter = chinchinmeter - gamVal;
				}

			}
			else
			{
				puts("Chin Chin attackd you while offguard and you died of Swine Flu.......GAME OVER");
			}
			puts(" ");
			puts("Alright now for this last item, I want you to pick up this crumpled up paper.");
			puts(" ");
			puts("Francis throws a piece of paper in front of you");
			puts(" ");
			puts("Pick that up.............or are you a coward?");
			puts("1. Pick up the wad of paper because you're not a coward");
			puts("2. You are actually extremely scared of wad up papers");
			puts("3. GAMBLE");
			scanf("%d",&newChoice);
			if(newChoice == 1)
			{
				puts("You decide to pick up the piece of paper because you realized a bottle of vodka is on the line");
				if ((fptr = fopen("wadofpaper.txt", "r")) == NULL)
				{
					puts("file is nonexistent");
					exit(1);
				}

				fscanf(fptr, "%s", paper);
				printf("The word %s was written hastily on it",paper);
				fclose(fptr);
			}
			else if(newChoice == 2)
			{
				puts("You almost wussed out but then you realized a bottle of vodka is on the line");
				puts("...........");
				puts("However you still couldn't bring yourself to do it.");
			}
			else if(newChoice == 3)
			{
				puts("Against your better judgement, you ignored the vodka and tried to gamble");
				gamVal = gambleRandom();
				gbVal = 1 + (rand() % 9);
				if(gbVal >= 6)
				{
					puts("Ehhhh I would have chose the alcohol but eh whatever");
					puts("Chin Chin gave you a look full of pity");
					chinchinmeter = chinchinmeter - gamVal;
				}
				else if(gbVal < 6)
				{
					puts("I guess you're just plain stupid huh?");
					puts("Chin Chin gleefully looks at you with malice");
					chinchinmeter = chinchinmeter - gamVal;
				}
				skip = skip + 1;
			}
			else
			{
				puts("Chin Chin attacked you while offguard and you died of food poisoning.....GAME OVER");
				break;
			}
			if(skip == 0)
			{
				puts(" ");
				puts("SO.......what did the paper say?");
				scanf("%s",userInput);
				if(strcmp(userInput,papaAsked) == 0)
				{
					puts("NYESSSS very impressive");
					vodka = vodka + 1;
				}
				else
				{
					puts("Guess you wussied out huh???");
					puts("NO VODKA FOR YOU");
				}
			}
			puts(" ");
			puts("OH MAN, ITS TIME FOR OUR EPIC SHOWDOWN");
			puts("...........");
			puts("What? You thought this was a race?");
			puts("Did you actually scroll all the way up to check the dialogue?");
			puts("What a NERD!!!");
			puts("Have you already forgotten that this room is hella small");
			puts("DON'T FORGET THAT I MAKE THE RULES HERE SO WHATEVER I SAY GOES");
			puts("EVEN IF WHAT I SAY NOW IS INCONSISTENT WITH WHAT I SAID BEFORE!");
			puts("So here is some final bit of information for you");
			puts(" ");
			puts("Everything I been asking you so far has been either adding points or subtracting points");
			puts("Chin Chin also has points but his is fixed at a specific unknown value");
			puts("To put it simply, to beat this him and this room overall, you need to have at least 1 point higher than his");
			puts("So the more points you have the higher chance you have at beating Lord Chin Chin");
			puts("Oh yea, the items and stuff you obtained along the way can increase your points or lower Chin Chin's points so you better hope you obtained those items");
			puts(" ");
			puts("SO ARE YOU READY!");
			puts("ITS TIME TO DO THIS!");
			puts(" ");
			printf("*Your current points is %d, while Chin Chin has %d*\n",chinchinmeter,chinchinprox);
			printf("*You need %d points to beat him*\n",chinchinprox - chinchinmeter);
			if(prometheus == 1 || vodka == 1 || cookbook == 1)
			{
				puts("*You remembered that you had items in your inventory*");
				if(cookbook == 1)
				{
					puts("Do you want to use the cookbook?");
					puts("1. Yes");
					puts("2. No");
					scanf("%d",&newChoice);
					if(newChoice == 1)
					{
						puts("You decide to cook yourself some Japanese Cuisine witht the cookbook");
						puts("you gained 10 points!");
						chinchinmeter = chinchinmeter + 10;
						cookbook = cookbook + 1;
					}
					else if(newChoice == 2)
					{
						puts("You decided to not use it");
					}
					else
					{
						puts("Chin Chin attacks you while offguard and you die of brain hemmorage......GAME OVER");
						break;
					}
				}
				if(vodka == 1)
				{
					puts("Chin Chin is eyeing your bottle of vodka");
					puts("Do you want to give him your vodka??");
					puts("1. Hell no");
					puts("2. Absolutely Not");
					puts("3. WHy is this an option");
					puts("4. I can't believe I'm doing this!");
					scanf("%d", &newChoice);
					if(newChoice == 1 || newChoice == 2 || newChoice == 3)
					{
						puts("You greedily opened the bottle and drank the whole thing!");
						puts("You felt really proud and satisfied");
						puts("Chin Chin actually looks at you with intense admiration");
						puts("However you're too drunk to focus so you lose 15 points");
						puts(" ");
						chinchinmeter = chinchinmeter - 15;
						vodka = vodka + 1;
					}
					else if(newChoice == 4)
					{
						puts("You reluctantly give the vodka to Chin Chin");
						puts("Instead of drinking it, he turns it into a molotov");
						puts("But he got the butterfingers and burned himself");
						puts("Chin Chin loses 15 points");
						puts(" ");
						chinchinprox = chinchinprox - 15;
					}
					else
					{
						puts("Chin Chin attacks you while offguard and you die of a stroke.......GAME OVER");
						break;
					}
				}
				if(prometheus == 1)
				{
					puts("Chin Chin looks fearful of Prometheus's chromosones");
					puts("Do you want to use it?");
					puts("1. Yes");
					puts("2. No");
					scanf("%d", &newChoice);
					if(newChoice == 1)
					{
						puts("You consumed the chromosones and you gained the awesome power of prometheus!");
						puts("You gained 15 points");
						puts(" ");
						chinchinmeter = chinchinmeter + 15;
						prometheus = prometheus - 1;
					}
					else if(newChoice == 2)
					{
						puts("You decided not to use the chromosones");
						puts(" ");
					}
					else
					{
						puts("Chin Chin attack you while offguard and you died of Cancer......GAME OVER");
						break;
					}

				}
			}
			if(prometheus == 0 && cookbook == 2 && vodka == 2)
			{
				puts("*Chin Chin after seeing you cook food, down a bottle of vodka and take on the form of Prometheus.*");
				puts("*He has gained a newfound respect for you*");
				puts(" ");
				puts("*Francis stands there stunned*");
				puts(" ");
				puts("What? Are you kidding me? No one has every impressed Chin Chin in over 9000 chromosones.(Apparently chromosones is also a measurement of time)");
				puts("I see now.  You have shown your worth stranger who's named I did not bother to rememeber");
				puts("By the power invested in me as a Peace Lord, I hereby let you go");
				puts("Be honored for you have impressed a mighty dark lord and lived to tell the tale");
				puts("*You walked out of the room and as you closed the door, you heard Francis say 'Well that was boring'");
				puts("RESPECTED END");
				break;
			}
			printf("You have %d while Chin Chin has %d",chinchinmeter,chinchinprox);
			if(chinchinmeter > chinchinprox)
			{
				puts(" ");
				puts("You triumphantly won against the dark lord");
				puts(" ");
				puts("OH MAN, I CAN'T BELIEVE YOU BEAT CHIN CHIN THE ALMIGHTY DARK LORD");
				puts("By the cancer invested in me, I hereby let you go on your merry way");
				puts(" ");
				puts("You noddded at Francis and triumphantly walked out, however you feel that this was all a big waste of time");
				puts("NORMAL END");
				break;
			}
			if(chinchinmeter < chinchinprox)
			{
				puts(" ");
				puts("You tragistically lost against the dark lord");
				puts(" ");
				puts("OH BOY, I KNEW YOU WOULD LOSE YOU STUPID VEGAN");
				puts("NOW CHIN CHIN WILL ABSORB YOUR CHROMOSONES AND WE WILL BE UNSTOPPABLE");
				puts(" ");
				puts("As Chin Chin absorbed your chromosones, in your last thoughts, you couldn't believe that you lost against some guy wearing a tight skin suit");
				puts("BAD END");
				break;
			}

                    }	
                    break;
                }
            case 7:
                {	srand(time(NULL));
					int randomNum[5]={0};
					int i;
					char ch;
					int *ptrnum = randomNum;
					int endings[11] = {0};
					FILE *rptr;
					FILE *wptr;
					int trueEnding =0;
					wptr = fopen("Room7Endings.txt","w+");
					if((rptr = fopen("Room7Endings.txt","r+")) == NULL)
					{
						for(i=0;i<11;i++)
						fprintf(wptr,"%d ",endings[i]);
					}
					if((rptr = fopen("Room7Endings.txt","r+")) != NULL)
					{
						for (i = 0; i < 11; i++)
						{
							fscanf(rptr, "%1d", &endings[i]);
						}
					}
					
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        puts("an old man sitting in the middle of the dark and baren room.");
                        puts("You have four choices: ");
                        puts("1.Approach the old man");
                        puts("2.Scream at the old man");
                        puts("3.Try to sneak behind the old man");
                        puts("4.Leave the old man to die.");
						puts("What do you do?");
                        scanf("%d",&choice);
						
                        if(choice == 1)
                        {
                            puts("As you approach the old man he notices you. You have two choices: ");
                            puts("1.Try talking to the old man");
                            puts("2.Pretend he didn't notice and walk away");
							puts("What do you do?");
                            scanf("%d",&choice);
                            if(choice ==1)
                            {
                                puts("The old man was resting and you have disturbed his slumber. You are now in combat you have two options:");
                                puts("1.Attempt to beat him");
                                puts("2.Run away");
								puts("What do you do?");
                                scanf("%d",&choice);
                                if(choice == 1)
                                {
                                    puts("The old man dodges your attacks. He swings his arm at you. ");
									puts("He hits you. You take 999 damage.");
									puts("You are dead \nGame over\n");
									endings[0]=1;
									for(i=0;i<11;i++)
										fprintf(wptr,"%d ",endings[i]);
                                    break;
                                }
                                if(choice == 2)
                                {
                                    puts("As you begin to run the old man stands up. He catches up to you in a split second.");
                                    puts("Your vision goes blury. You are dead. \nGame over\n");
									endings[1]=1;
									for(i=0;i<11;i++)
										fprintf(wptr,"%d ",endings[i]);
                                    break;
                                }
                            }
                            if(choice == 2)
                            {
                                puts("The old man sees your attempt to leave and visibly angers");
                                puts("As soon as you turn around you hear the old man breathing behind you");
                                puts("The last thing you see is your lower body being strown accross the floor");
                                puts("You are dead. \nGame over.\n");
								endings[2]=1;
								for(i=0;i<11;i++)
									fprintf(wptr,"%d ",endings[i]);
                                break;
                            }
                            break;
                        }
                        if(choice == 2)
                        {
                            puts("You startle the old man. He falls over and appears dead. You have two choices: ");
							puts("1. Poke the dead body.");
							puts("2. Feel guilty.");
							puts("What do you do?");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You look around the room for a stick to poke the old man.");
								puts("You spot a stick by the chair the old man was sitting. Pick it up?");
								puts("1. Yes.");
								puts("2. No.");
								scanf("%d",&choice);
								if(choice == 1)
								{
									puts("You pick up the stick. With the stick in hand you approach the old man.");
									puts("You poke at the old man a couple of times, but you see no reaction.");
									puts("You have two choices: ");
									puts("1. Dispose of the body.");
									puts("2. Get Out!");
									puts("What do you do?");
									scanf("%d",&choice);
									if(choice == 1)
									{
										puts("You decide that you would rather make the nobler choice of disposing of the evidence");
										puts(" than be responsible for the untimely death of this old fogey. You can: ");
										puts("1. Find a rug to cover his boddy.");
										puts("2. Hide his body behind the chair.");
										scanf("%d",&choice);
										if(choice == 1)
										{
											puts("You search the room for a rug but are unable to find one.");
											puts("So you decide the best way to hide him is to throw a coat over him. ");
											puts("It is not the best cover, but it's at least something and you feel ");
											puts("quite satisfied with your work. Now you feel it is time to leave the ");
											puts("scene of the crime. As you leave you notice the old man's corpse begins to stir. ");
											puts("You scream at the old man \"Stay dead you foul beast!\", but he continues by rising from ");
											puts("his impromptu resting place. He looks quite grotesque like the most disgusting thing you have ");
											puts("ever layed your eyes on. He is so ugly that you die. ");
											puts("Game over. \n\"But I wasn't really dead you just covered me with a coat\"\n");
											endings[3] =1;
											for(i=0;i<11;i++)
												fprintf(wptr,"%d ",endings[i]);
											break;
										}
										if(choice == 2)
										{
											puts("You decide the best way to hide his body is to stash it behind the chair. ");
											puts("After you stashed his body you step back to observe your crafty work and decide ");
											puts("that it was a shitty idea. The chair did nothing to hide his body. You hear sirens in ");
											puts("the distance. The police arrive and take you to jail. You are charged with the murder of ");
											puts("a senior citizen. You are given life in prison and wait out the rest of your life in prison.");
											puts("Game over.\nBut the old man's corpse was never found.\n");
											endings[4] = 1;
											for(i=0;i<11;i++)
												fprintf(wptr,"%d ",endings[i]);
											break;
										}
										break;
									}
									if(choice == 2)
									{
										puts("You decide that you would rather leave than have to deal with this hot mess. ");
										puts("You do a complete 180 and head back for the exit. On the door there is a keypad with ");
										puts("a note saying to enter 5 numbers: ");
										puts("Just as your about to enter the numbers the old man types in");
										room7RandomNum(ptrnum,5);
										room7SortNum(ptrnum,5);
										puts("You hear the old man behind you scream \"The numbers from biggest to smallest are ");
										for(i=0;i<5;i++)
										{
											printf("%d!\n",randomNum[i]);
										}
										puts("You are shocked you thought the old man had died. You sudenly feel a tightness in your chest ");
										puts("begin to overwelm you. You had a heart attack. You are dead.");
										puts("Game over\n");
										endings[5] = 1;
										for(i=0;i<11;i++)
											fprintf(wptr,"%d ",endings[i]);
										break;
									}
									
									break;
								}
								if(choice == 2)
								{
									puts("You decide not to pick up the stick. You approach the old man ");
									puts("and kneel down. You decide the best course of actions is to poke him ");
									puts("with your finger. Then the old man moves and says \"I'm not dead! Stop poking me!\"");
									puts("You can: ");
									puts("1. Keep poking.");
									puts("2. Stop");
									scanf("%d",&choice);
									if(choice == 1)
									{
										puts("How many times do you poke?");
										puts("a. 1");
										puts("b. 2");
										puts("c. 5");
										puts("d. 100000");
										scanf(" %c",&ch);
										switch(ch)
										{
											case 'a':
											case 'A':
											{
												puts("Why would you poke me? I told you i'm not dead.");
												break;
											}
											case 'b':
											case 'B':
											{
												puts("Why would you poke me twice? I told you i'm not dead.");
												break;
											}
											case 'c':
											case 'C':
											{
												puts("Why would you poke five times? thats a little excesive.");
												break;
											}
											case 'd':
											case 'D':
											{
												puts("The old man yells \"STOP IT!\"");
												break;
											}
											default:
											{
												puts("The old man is visibly confused");
												break;
											}
										}
										puts("The old man grabs your finger. The events that follow are too gruesome to describe ");
										puts("but it ends with you dead.");
										puts("Game over\n");
										endings[6] = 1;
										for(i=0;i<11;i++)
											fprintf(wptr,"%d ",endings[i]);
										break;
									}
									if(choice == 2)
									{
										puts("The old man says \"Thank you for not poking me despite the desire I saw burning in your eyes. ");
										puts("However I have the same desire, but I don't have as much self control.\" He then begins poking ");
										puts(" you with such fervor. He pokes you so much you begin to bleed. He continues his onslaught.");
										puts("You are dead");
										puts("Game over\n");
										endings[7] = 1;
										for(i=0;i<11;i++)
											fprintf(wptr,"%d ",endings[i]);
										break;
									}
									break;
								}
								break;
							}
							if(choice == 2)
							{
								puts("As you contemplate suicide over the guilt of killing an old man you notice him stand up.");
								puts("He becomes infuriated by your actions and bring down his fury upon you. He completely decimates you.");
								puts("You are dead. Game over");
								endings[8] = 1;
								for(i=0;i<11;i++)
									fprintf(wptr,"%d ",endings[i]);
								break;
							}
                            break;
                        }
                        if(choice == 3)
                        {
                            puts("As you approach you make a loud noise. You look down and notice the");
							puts("origin of the noise was a loose tile you stepped on.");
                            puts("As you look up the old man is nowhere to be found. The next sensation");
							puts("you feel is a heavy hit in the back of the head.");
                            puts("You are dead. Game over");
							endings[9] = 1;
							for(i=0;i<11;i++)
								fprintf(wptr,"%d ",endings[i]);
                            break;
                        }
                        if(choice == 4)
                        {
                            puts("As you walk away the old man screams at you. He says \"Why would you just leave me?\"");
                            puts("You turn around and notice that the old man has taken all your belongings.");
                            puts("He screams \"You will pay with your life!\" You are dead. Game over");
							endings[10] = 1;
							for(i=0;i<11;i++)
								fprintf(wptr,"%d ",endings[i]);
                            break;
                        }
                    }
                    break;
					fclose(rptr);
					fclose(wptr);
                }
            case 8:
            {
                while(choice != 99) {
                    //colors
						#define RED     "\x1b[0;31m"
						#define BOLDRED "\x1b[1;31m"
						
						#define GREEN   "\x1b[0;32m"
						#define BOLDGREEN   "\x1b[1;32m"
						
						#define YELLOW  "\x1b[0;33m"
						#define BOLDYELLOW  "\x1b[01;33m"
						
						#define BLUE    "\x1b[0;34m"
						#define BOLDBLUE    "\x1b[1;34m"
						
						#define MAGENTA "\x1b[0;35m"
						#define BOLDMAGENTA "\x1b[1;35m"
						
						#define CYAN    "\x1b[0;36m"
						#define BOLDCYAN    "\x1b[1;36m"
						
						#define BOLD "\x1b[1m"
						#define UNDERLINE "\x1b[4m"
						#define REVERSED "\x1b[7m"
						#define RESET   "\x1b[0m"
						
					char option[10];
					int result;
					
					//check if option contains 99
					//check if option has only 'h' for help
					
					system("clear");
					
					
					//OPENING TITLES//
					usleep(75000 * 10);  /* sleep for 100 milliSeconds */
					
					//frame1
						puts("\n\n\n\n\n\n\n\n\n");
						puts("+-----------------------------------------------------------------------------+");
						puts("+-----------------------------------------------------------------------------+");
						usleep(50000); 
						system("clear");
					//frame2
						puts("\n\n\n\n\n\n\n\n");
						puts("+-----------------------------------------------------------------------------+");
						puts(BOLDBLUE"  \\___ \\| | | | '__\\ \\ / / \\ \\ / / _` | | | | |_ |/ _` | '_ ` _ \\ / _ \\ "RESET);
						puts("+-----------------------------------------------------------------------------+");
						usleep(50000); 
						system("clear");
					//frame3
						puts("\n\n\n\n\n\n\n");
						puts("+-----------------------------------------------------------------------------+");
						puts(BOLDBLUE" | (___  _   _ _ ____   _____   ____ _| | | |  __  __ _ _ __ ___   ___ ");
						puts("  \\___ \\| | | | '__\\ \\ / / \\ \\ / / _` | | | | |_ |/ _` | '_ ` _ \\ / _ \\ ");
						puts("  ____) | |_| | |   \\ V /| |\\ V / (_| | | | |__| | (_| | | | | | |  __/"RESET);
						puts("+-----------------------------------------------------------------------------+");
						usleep(50000); 
						system("clear");
				
					//frame4
						puts("\n\n\n\n\n\n");
						puts("+-----------------------------------------------------------------------------+");
						puts(BOLDBLUE"  / ____|                (_)          | |  / ____|                     ");
						puts(" | (___  _   _ _ ____   _____   ____ _| | | |  __  __ _ _ __ ___   ___ ");
						puts("  \\___ \\| | | | '__\\ \\ / / \\ \\ / / _` | | | | |_ |/ _` | '_ ` _ \\ / _ \\ ");
						puts("  ____) | |_| | |   \\ V /| |\\ V / (_| | | | |__| | (_| | | | | | |  __/"RESET);
						puts("+-----------------------------------------------------------------------------+");
						usleep(50000); 
						system("clear");
						
					//frame5
						puts("\n\n\n\n\n");
						puts("+-----------------------------------------------------------------------------+");
						puts(BOLDBLUE"   _____                  _            _    _____                      ");
						puts("  / ____|                (_)          | |  / ____|                     ");
						puts(" | (___  _   _ _ ____   _____   ____ _| | | |  __  __ _ _ __ ___   ___ ");
						puts("  \\___ \\| | | | '__\\ \\ / / \\ \\ / / _` | | | | |_ |/ _` | '_ ` _ \\ / _ \\ ");
						puts("  ____) | |_| | |   \\ V /| |\\ V / (_| | | | |__| | (_| | | | | | |  __/");
						puts(" |_____/ \\__,_|_|    \\_/ |_| \\_/ \\__,_|_|  \\_____|\\__,_|_| |_| |_|\\___|"RESET);
						puts("\n+-----------------------------------------------------------------------------+");
						printf("                                                            ");
						TypeWriter("Version 1.0");
						usleep(150000); 
						system("clear");
						
					//frame6
						puts("\n\n\n\n\n");
						puts("+-----------------------------------------------------------------------------+");
						puts(BOLDBLUE"   _____                  _            _    _____                      ");
						puts("  / ____|                (_)          | |  / ____|                     ");
						puts(" | (___  _   _ _ ____   _____   ____ _| | | |  __  __ _ _ __ ___   ___ ");
						puts("  \\___ \\| | | | '__\\ \\ / / \\ \\ / / _` | | | | |_ |/ _` | '_ ` _ \\ / _ \\ ");
						puts("  ____) | |_| | |   \\ V /| |\\ V / (_| | | | |__| | (_| | | | | | |  __/");
						puts(" |_____/ \\__,_|_|    \\_/ |_| \\_/ \\__,_|_|  \\_____|\\__,_|_| |_| |_|\\___|"RESET);
						puts("\n+-----------------------------------------------------------------------------+");
						printf(BOLDGREEN);
						printf("                                                            Version 1.0");
						printf(RESET);
						//usleep(100000 * 10); 
					
					//prompt to continue
						puts("\n\n\n\n\n\n\n");
						printf("Press ENTER to continue........");
						getchar();
						getchar();
						
					//MENU//
						system("clear");
						
						puts("+-----------------------------------------------------------------------------+");
						puts(BOLDGREEN"                                Survival Game                              1.0"RESET);
						puts("                        _");
						puts("                       /#\\");
						puts("                      /###\\     /\\");
						puts("                     /  ###\\   /##\\  /\\");
						puts("                    /      #\\ /####\\/##\\");
						puts("                   /  /       /     # / ##\\             _       /\\");
						puts("                 // //  /\\  /    _/  /    #\\ _         /#\\    _/##\\    /\\");
						puts("                // /   /  \\     /   /    #\\ \\        _/###\\_ /   ##\\__/ _\\");
						puts("               /  \\   / .. \\   / /   _   { \\ \\   _/       / //    /    \\");
						puts("     /\\      /    /\\  ...  \\_/   / / \\   } \\ | /  /\\  \\ /  _    /  /    \\ /\\\\ ");
						puts("+-----------------------------------------------------------------------------+");
	
						puts("["BOLDGREEN"1"RESET"] Play");
						puts("["BOLDBLUE"2"RESET"] Game Stats");
						puts("["BOLDYELLOW"3"RESET"] Pirate Mode");
						puts("["BOLDMAGENTA"4"RESET"] Help");
						puts("");
						puts("["BOLDRED"99"RESET"] Exit");
						puts("");
						puts(" Marcus Schumann                                   Copyright or something 2018  ");
						puts("+-----------------------------------------------------------------------------+");
						TypeWriter(BOLDGREEN REVERSED">"RESET" ");
						scanf("%d",&choice);
					
					if(choice == 1){
						system("clear");
						puts("Type "BOLDMAGENTA "h" RESET" for help\n\n\n\n\n\n\n\n\n\n\n\n");
					
						int playedGames = getFileInfo(1);
						
						//PROLOGUE (if never played)//
						if(playedGames == 0){
							//Question 1
							while(1){
								//Introduction
								TypeWriter("\nYour name is ");
								printf(BOLDBLUE"%s"RESET,name);
								TypeWriter(", and you're on a trip to see family in Canada....\n");
								TypeWriter("Everything seems to be going normally. You went through security and\nfound your seat on the plane.\n");
								TypeWriter("Pretty soon you're in the air and the flight attendants are going\ndown the aisles to give out drinks\n");
								TypeWriter("Would you like something to drink sir?\n");
									puts("\t1. ask for water");
									puts("\t2. ask for a sprite ");
									puts("\t3. ask for a beer ");
									puts("\t4. tell her to go away\n");
								
								TypeWriter(BOLDGREEN REVERSED"What Say You?:"RESET" ");
								scanf("%s",option);
								result = checkInput(option);
							
								while(result  == 0 || result == -1){
								
									if(result == 0 && result != 1){
										if(strcmp("h",option) == 0 || strcmp("H",option) == 0){
											//help
											printf(BOLDMAGENTA UNDERLINE "HELP:\n"RESET);
											printf("\nThis is an interactive game. Use numbers to make\nchoices in the game\n");
											
										}
									}
										
									printf("\nWrong input type try again..\n\n");
									printf(BOLDGREEN REVERSED"What Say You?:"RESET" ");
									scanf("%s",option);
									result = checkInput(option);
										
								}
							
							
								//extract integer out of string
								int num_choice;
								char *ptr = option;
								
								while (*ptr){
									if (isdigit(*ptr)) {
										int val = strtol(ptr, &ptr, 10);
										num_choice = val;
									} else {
										ptr++;
									}
								}
							
								choice = num_choice;
		
								switch(choice) {
									case 1:
										printf("Here you go sir\n");
										printf("You like water.\n\n");
										break;
									case 2:
										printf("Here you go sir\n");
										printf("You like sprite.\n\n");
										break;
									case 3:
										printf("Here you go sir\n");
										printf("You like beer.\n\n");
										break;
									case 4:
										printf("She looks at you angrily, then keeps going down the aisles\n\n");
										break;
									case  99:
										printf("You quit the game\n\n");
										exit(0);
										break;
									default :
										printf(BOLDRED"\n\nNot a valid choice, Try Again.\n"RESET);
								}
							
								if(choice == 1){
									break;
								}
								
								if(choice == 2){
									break;
								}
								
								if(choice == 3){
									break;
								}
								
								if(choice == 4){
									break;
								}
							}
							
							//Question 2
							while(1){
						
								puts("You decide to take nap........");
								puts("you have a long way to go and you hate flying");
								puts("zzzzzzzzzzzzzzzzzz");
			
								puts("\n\n\n\n\n\n\n\n");
			
								puts("An hour passes and the pilot gives out a message: ");
								puts("Attention all passengers, we will be experiencing turbulence for the next hour. A large storm has formed in front of us");
								puts("How do you react?:");
			
								puts("\t1. Scream and freak out!-You start hyperventilating");
								puts("\t2. Remain calm\n");
			
								printf(BOLDGREEN REVERSED"What Say You?:"RESET" ");
								scanf("%s",option);
								result = checkInput(option);
								
								while(result  == 0 || result == -1){
									
									if(result == 0 && result != 1){
										if(strcmp("h",option) == 0 || strcmp("H",option) == 0){
											//help
											printf(BOLDMAGENTA UNDERLINE "HELP:\n"RESET);
											printf("\nThis is an interactive game. Use numbers to make\nchoices in the game\n");
											
										}
									}
									
									printf("\nWrong input type try again..\n\n");
									printf(BOLDGREEN REVERSED"What Say You?:"RESET" ");
									scanf("%s",option);
									result = checkInput(option);
									
								}
							
								//extract integer out of string
									int num_choice;
									char *ptr = option;
									
									while (*ptr){
										if (isdigit(*ptr)) {
											int val = strtol(ptr, &ptr, 10);
											num_choice = val;
										} else {
											ptr++;
										}
									}
								
								choice = num_choice;
								
								switch(choice) {
									case 1:
										printf("You begin screaming like a 3 year old girl and get up and start running around like a headless chicken. You die from a heartattack\n");
											//run GAMEOVER METHOD
										exit(0);
										choice = 99;
										break; /* optional */
									case 2:
										printf("You remain calm as the plane starts to shake\n");
										puts("A couple of minutes later the shaking becomes stronger and you glance around to see frightened passengers");
										puts("The plane is then struck with lightning and the plane starts FALLING");
										puts("\n");
										puts("You wake up and find yourself among the wreckage of the plane. You're head is hurting from the crash and you feel dizzy");
										puts("No one else is alive, but you know one thing: You must SURVIVE");
										
										
										int numInput;
										puts("\nDo you wish to continue?\ndo you accept the challenge to survive as long as possible?\n");
										puts("\t1. yes");
										puts("\t2. no\n");
										scanf("%d",&numInput);
										
										
										if(numInput == 1){
											
										}else{
											printf("too bad");
										}
										
										break; /* optional */
									case  99:
										printf("\n\nYou quit the game\n\n");
										exit(0);
										break;
									default :
										printf(BOLDRED"\n\nNot a valid choice, Try Again.\n"RESET);
								}
								
								if(choice == 1){
									break;
								}
							
								if(choice == 2){
									break;
								}
							}
						}
						//END of PROLOGUE//
						
						
						//MAIN GAME//
						
						//Question1
						while(1){
							TypeWriter("\n\nOk let's begin...\n");
							TypeWriter("So where were we...\n");
							TypeWriter("Oh yeah, You find yourself in a clearing near the plane wreckage.\n");
							puts("\t1. to the North there is a dense forest");
							puts("\t2. to the East is the plane");
							puts("\t3. to the West you can see mountains in the distance");
							TypeWriter("\nWhere do you go?\n");
							
							TypeWriter(BOLDGREEN REVERSED">>"RESET" ");
							scanf("%s",option);
							result = checkInput(option);
							
							while(result  == 0 || result == -1){
								
								if(result == 0 && result != 1){
									if(strcmp("h",option) == 0 || strcmp("H",option) == 0){
										//help
										printf(BOLDMAGENTA UNDERLINE "HELP:\n"RESET);
										printf("\nThis is an interactive game. Use numbers to make\nchoices in the game\n");
										
									}
								}
									
								printf("\nWrong input type try again..\n\n");
								printf(BOLDGREEN REVERSED"What Say You?:"RESET" ");
								scanf("%s",option);
								result = checkInput(option);
									
							}
	
	
							//extract integer out of string
								int num_choice;
								char *ptr = option;
								
								while (*ptr){
									if (isdigit(*ptr)) {
										int val = strtol(ptr, &ptr, 10);
										num_choice = val;
									} else {
										ptr++;
									}
								}
							
							choice = num_choice;
							
							switch(choice) {
								case 1:
									printf("You venture forwards into the dense forest\n");
									puts("You get eaten by a pack of wolves");
									puts("Did you forget you're in the wilderness?");
									gameOver(0);
									break;
								case 2:
									puts("You go East towards the plane wreckage");
									puts("You sift through the wreckage looking for anything you can use to survive");
									puts("You find a backpack!");
									puts("in the backpack you find some stuff:");
									puts("\t1.matches");
									puts("\t2.snickers - because snickers satisfies");
									break;
								case 3:
									puts("You decide to trek to the mountains");
									puts("Without food or water you die within the week");
									gameOver(0);
									break;
								case  99:
									printf("You quit the game\n\n");
									exit(0);
									break;
								default :
									printf(BOLDRED"\n\nNot a valid choice, Try Again.\n"RESET);
							}
							
							if(choice == 1){
								break;
							}
							
							if(choice == 2){
								break;
							}
							
							if(choice == 3){
								break;
							}
													
						}
						//Question 1 END
						
						
						//Question 2
						system("clear");
						while(1){
							puts("It's getting and late and the Sun is slowly disappearing");
							puts("You need to make a fire...");
							puts("\t1. Gather firewook and kindling, and use the matches");
							puts("\t2. Freeze to death");
							puts("\t3. Shout for help");
							
							printf(BOLDGREEN REVERSED"What Say You?:"RESET" ");
							scanf("%s",option);
							result = checkInput(option);
							
							while(result  == 0 || result == -1){
								
								if(result == 0 && result != 1){
									if(strcmp("h",option) == 0 || strcmp("H",option) == 0){
										//help
										printf(BOLDMAGENTA UNDERLINE "HELP:\n"RESET);
										printf("\nThis is an interactive game. Use numbers to make\nchoices in the game\n");
										
									}
								}
									
								printf("\nWrong input type try again..\n\n");
								printf(BOLDGREEN REVERSED"What Say You?:"RESET" ");
								scanf("%s",option);
								result = checkInput(option);
									
							}
	

							//extract integer out of string
								int num_choice;
								char *ptr = option;
								
								while (*ptr){
									if (isdigit(*ptr)) {
										int val = strtol(ptr, &ptr, 10);
										num_choice = val;
									} else {
										ptr++;
									}
								}
							
							choice = num_choice;
							
							switch(choice) {
								case 1:
									puts("Good job.");
									puts("you find an axe while scavenging for wood");
									puts("and some rocks that look like they might give off a spark");
									puts("do you want to store the rocks?");
									puts("\t1. yes.");
									puts("\t2. no. \n");
									//gameOver(0);
									break;
								case 2:
									puts(":(");
									gameOver(0);
									break;
								case 3:
									puts("Wow great decision!");
									puts("You are ripped apart by an angry bear who hears you");
									gameOver(0);
									break;
								case  99:
									printf("You quit the game\n\n");
									exit(0);
									break;
								default :
									printf(BOLDRED"\n\nNot a valid choice, Try Again.\n"RESET);
							}
							
							if(choice == 1){
								break;
							}
							
							if(choice == 2){
								break;
							}
							
							if(choice == 3){
								break;
							}					
						}
						//Question 2 END
					
						break;
					
					
					}else if(choice == 2){
						system("clear");
						//game stats
							int gamesPlayed = 0;
							int totalDeaths = 0;
							int totalWins = 0;
					
						puts("+-----------------------------------------------------------------------------+\n");
		
						//TotalGames played
							for(i = 0;i < 25;i++){
								printf(" ");
							}
							printf("Total Games Played:   "BOLDRED);
							gamesPlayed = getFileInfo(1);
							printf("%d\n\n"RESET,gamesPlayed);
		
						//TotalDeaths
							for(i = 0;i < 25;i++){
								printf(" ");
							}
							printf("Total Wins:   "BOLDRED);
							totalWins = getFileInfo(2);
							printf("%d\n\n"RESET,totalWins);
		
						//LongestTimeSurvived
							for(i = 0;i < 25;i++){
								printf(" ");
							}
							printf("Total Deaths:   "BOLDRED);
							totalDeaths = getFileInfo(3);
							printf("%d\n\n"RESET,totalDeaths);
							
						puts("+-----------------------------------------------------------------------------+");
						
						puts("["BOLDGREEN"1"RESET"] Back");
						puts("["BOLDRED"99"RESET"] Exit");
						
						puts("+-----------------------------------------------------------------------------+");
						
						TypeWriter(BOLDGREEN REVERSED">"RESET" ");
						scanf("%d",&choice);
						
						if(choice == 1){
							
							
						}else if(choice == 99){
							printf("You quit the game\n\n");
							exit(0);
						}
							
					}else if(choice == 3){
						system("clear");
						puts("+-----------------------------------------------------------------------------+\n");
						
						puts("Not implemented yet: version 2.0 :(\n");
						
						puts("+-----------------------------------------------------------------------------+");
						
						puts("["BOLDGREEN"1"RESET"] Back");
						puts("["BOLDRED"99"RESET"] Exit");
						
						puts("+-----------------------------------------------------------------------------+");
						
						TypeWriter(BOLDGREEN REVERSED">"RESET" ");
						scanf("%d",&choice);
						
						if(choice == 1){
							
							
						}else if(choice == 99){
							printf("You quit the game\n\n");
							exit(0);
						}
						
					}else if(choice == 4){
						system("clear");
						puts("+-----------------------------------------------------------------------------+\n");
						
						//help
							printf(BOLDMAGENTA UNDERLINE "HELP:\n"RESET);
							printf("\nThis is an interactive game. Use numbers or short words to make choices in the \ngame.\n\n");
							
						puts("+-----------------------------------------------------------------------------+");
						
						puts("["BOLDGREEN"1"RESET"] Back");
						puts("["BOLDRED"99"RESET"] Exit");
						
						puts("+-----------------------------------------------------------------------------+");
						
						TypeWriter(BOLDGREEN REVERSED">"RESET" ");
						scanf("%d",&choice);
						
						if(choice == 1){
							
							
						}else if(choice == 99){
							printf("You quit the game\n\n");
							exit(0);
						}
							
					}else if(choice == 99){
						printf("You quit the game\n\n");
						exit(0);
					}else{
                        printf("Sorry con't recognize that input type\n\n");
					}
				}
                scanf("%d",&choice);

				break;	
            }
            case 9:
                {
					#define FILE_NAME "MadDog.txt"
					
					
					bool chp1 = false, chp2 = false, chp3 = false, chp4 = false;
					bool key = false, FiveHundred = false, JailKey = false, sheriff = false;
					int take;
					
					FILE *wptr;

					char option[256];
					
					    printf("you open the door and find ........ \n");
                        printf("You are in a dark room. You then open another door and you see light shining bright as you step out side\n");
						printf("As you walk outside into what looks like a ghost town, an old man with gray beard and bald head runs up and tells you \" stranger, we need your help!\" \n");
						puts(" ");
						printf("You are first confused and want to ask what's happening but the old man continues \" MadDog McCree and his gang has return to terrorize our town! \n");
						puts(" ");
						printf("You have no idea how you got here but you feel you got to save this town to get out of here. \" His gang has taken over various parts of town and only you can get them out of here! \"");
						puts(" ");
						printf("Maybe this is too dangerous, perhaps you should decline but the old man continue \" His gang can be found over at the Saloon, the Post Office, the Bank, General Store, and in the Jail where they locked the sheriff! \"\n");
						printf("\" So please stranger, can you help us take out MadDog and his gang once as for all?? \"");
						puts(" ");
                    while(choice != 99)
					{
                        printf("1. Yes, I'll help  \n2. Sorry old man, I'll come back later  \n");
                        scanf("%d",&choice);

                        if(choice == 1)
						{
					
                        printf("You tell the old man your name and agree to help him chase the MadDog gang out of town. \n");
						printf("\"Oh thank you, %s! Now hurry, MadDog is only growing stronger the longer we stand here! \"", name);
						puts(" ");
						while(choice != 99)
						{
						
						Menu:
						puts("Choose a location:\n1. The Bank \n2. The Saloon \n3. The Jail \n4. The Post Office \n");
                        scanf("%d", &choice);
						
							if(choice == 1 && chp1 == false)
								{
											Bank:
											printf("AS you walk toward the entrance, a man hiding in a barrel next to the entrance peaks his head out.\n");
											printf("He tells you \"One of MadDog's gang is in there! Be careful, he is armed! \"");
											printf("You step into the bank, it looks abandon. However you do hear some noise. To the '"GREEN"west"RESET"' of you is the teller booth. '"GREEN"North"RESET"' of you is a door. You can also turn '"GREEN"back"RESET"'\n");
										while(*option != 'z')
											{
											printf(GREEN "Decision>" RESET);
											scanf("%s", option);
											
											
												if(strcasecmp(option, "west") == 0)
												{
													printf("You walk up to the teller booth. You try to see as much as you can but the secure bars are in the way. \n");
													printf("'"GREEN"Shout"RESET"' to the get a response or turn '"GREEN"back"RESET"'. \n");
												while(*option != 'z')
												{
													printf(GREEN "Decision>" RESET);
													scanf("%s", option);
														
														if(strcasecmp(option, "shout") == 0)
														{
															printf("You shout \" Hey! who's back there? \" You get a response \" None of your damn business!\" You respond back saying \"I know what you're doing, now get out here and leave this town in peace\"\n");
															printf("You hear the man respond \"That's it, you want to go? lets go! \" You hear foot steps coming closer and closer.\n");
															printf("'"GREEN"Hide"RESET"' immediately or '"GREEN"pull"RESET"' your gun out and get ready to tango?\n");
														while(*option != 'z')
														{
															printf(GREEN"Decision>" RESET);
															scanf("%s", option);
															
															if(strcasecmp(option, "hide") == 0)
															{
																printf("You suddenly hear \" Oh we have a prankster do we? Okay funny guy, this will be your last laugh! \"\n");
																printf("The foot steps sound like they are heading to the door. \n");
																printf("The door is now opening. You can '"GREEN"stay"RESET"' there or '"GREEN"shoot"RESET"' as soon as the guy walks out \n");
															while(*option != 'z')
															{
																printf(GREEN "decision>" RESET);
																scanf("%s", option);
																
																if(strcasecmp(option, "stay") == 0)
																{
																	printf("You see the door open but you stayed in place\n");
																	printf("The man looks overweight, wearing a plaid red shirt, with black suspender. \n");
																	printf("He has a full goatee, basically he looks like a fat duck dynasty character or young santa Claus. \n");
																	printf("However he doesn't look friendly. He has a shotgun pointed right at you. \" It's best you outta get out of here. it will turn ugly\" He tells you \n");
																	printf("He's not wrong, you better get out of here and restart this chapter. Any further and your a dead man. \n");
																	goto Menu;
																}
																
																else if(strcasecmp(option, "shoot") == 0)
																{
																	printf("You see the door open and you immediately shoot. Residue from the door spreads out around. \n");
																	printf("\"GODDAMN IT!\", the man shouts. You get up and immediately run behind the damage door. \n");
																	printf("\"That's it!\" the man shouts \"you are so f**king dead!\" He runs out the room looks left and right while you are right be hind him hiding behind the damaged door.\n");
																	printf("The man himself looks overweight, wearing a plaid red shirt, with black suspenders. \n");
																	printf("He is wearing a cowboy hat and has a full goatee, basically he looks like a fat duck dynasty character. \n");
																	printf("He's about to turn around, what's your move?");
																	printf("You notice that one shot was your only ammo. You can '"GREEN"hit"RESET"' him with your gun or do '"GREEN"nothing"RESET"' \n");
																while(*option != 'z')
																{
																	printf(GREEN "Decision>" RESET);
																	scanf("%s", option);
																	
																	if(strcasecmp(option, "hit") == 0)
																	{
																		printf("You immediately hit the man in the back of the head. He's out cold. \n");
																		printf("The guy that was hiding in the barrel walks in. He looks a little lanky with blue plaid shirt and Levis denom jeans. \n");
																		printf("Surprisingly, he was strong enough to pick up the man. \"I'm gonna cuff this man before he walks up. Here's award stranger, this man has been wanted for various murder and robbery crimes.\"\n");
																		printf("The skinny man awards you with 500 dollars. He then walks into the back room and notice a gun the ground. It as a double barreled side by side coach shot gun. Boy that would of spelled trouble if he pointed that at you!\n");
																		printf("The skinny guy tells you that the jail cannot be opened. One of MadDog's gang members have the key. You better hurry and find out where it's at!");
																		puts(" ");
																		printf("--------- END OF THIS CHAPTER ---------\n");
																		FiveHundred = true;
																		chp1 = true;
																		goto Menu;
																		
																	}
																	
																	else if(strcasecmp(option, "nothing") == 0)
																	{
																		printf("You didn't move, nothing at all. The man turns around, points his gun at you. Before you know it, it's too late. No need to tell you what happens next. \n");
																		puts(" ");
																		printf("GAME OVER\n");
																		
																		exit(EXIT_SUCCESS);
																	}
																}
																}
															}
															}
															
															else if(strcasecmp(option, "pull") == 0)
															{
																printf("You pull your gun, ready to shoot the man. \n");
																printf("You see him behind the teller desk, he is overweight with a red plaid shirt with black suspenders. He's wearing a cowboy hat and his face have a full goatee. \n");
																printf("He clearly sees you with a .44 magnum pointed at him. \"Go ahead!\" he says, \"you don't got the guts!\". It's up to you, this can turn ugly quick \n");
																printf("You can '"GREEN"shoot"RESET"' the man or you can '"GREEN"disarm"RESET"' yourself \n");
															while(*option != 'z')
															{
																puts(GREEN "Decision>" RESET);
																scanf("%s", option);
																
																if(strcasecmp(option, "shoot") == 0)
																{
																	printf("You shoot the man,\" GODDAMN IT!\" he shouts. Only his hat is hit; you got a pretty bad shot. \n");
																	printf("He seems really frustrated now and proceeded to run around to the door near you. \n");
																	printf("It's up to you. You can '"GREEN"hide"RESET"' behind the door or just '"GREEN"stand"RESET"' there \n");
																while(*option != 'z')
																{
																	printf("Decision>");
																	scanf("%s", option);
																	
																	if(strcasecmp(option, "hide") == 0)
																	{
																		printf("You suddenly hear \"You are about to meet your maker!\"\n");
																		printf("The criminal is now out the door and right in front of you but his back turned. \n");
																		printf("You can '"GREEN"stay"RESET"' there or '"GREEN"hit"RESET"' the man back of his head with your gun. \n");
																	while(*option != 'z')
																	{
																		printf(GREEN "decision>" RESET);
																		scanf("%s", option);
																		
																		if(strcasecmp(option, "hit") == 0)
																		{
																			printf("You immediately hit the man in the back of the head. He's out cold. \n");
																			printf("The guy that was hiding in the barrel walks in. He looks a little lanky with blue plaid shirt and Levis denom jeans. \n");
																			printf("Surprisingly, he was strong enough to pick up the man. \"I'm gonna cuff this man before he walks up. Here's award stranger, this man has been wanted for various murder and robbery crimes.\"\n");
																			printf("The man awards you with 500 dollars. He then walks into the back room and notice a gun the ground. It as a double barreled side by side coach shot gun. Boy that would of spelled trouble if he pointed that at you!\n");
																			printf("The guy explains that the jail cannot be opened. One of MadDog's gang members have the key. You better hurry and find out where it's at!");
																			puts(" ");
																			printf(GREEN "--------- END OF THIS CHAPTER ---------\n" RESET);
																			FiveHundred = 1;
																			chp1 = true;
																			goto Menu;
																		}
																		
																		else if(strcasecmp(option, "stay") == 0)
																		{
																			printf("The man turned around and he has a shotgun pointed right at you. \" It's best you outta get out of here. it will turn ugly\" He tells you \n");
																			printf("He's not wrong, you better get out of here and restart this chapter. Any further and your a dead man. \n");
																			printf("-----------------------\n");
																			goto Menu;
																		}
																	}
																	}
																	
																	else if(strcasecmp(option, "stand") == 0)
																	{
																		printf("The door opens fast, you see the man with a doubled barreled side by side coach shotgun. \n");
																		printf("One of a kind. Too bad you didn't get to observe it for that long but you did get a taste of the bullets. \n");
																		printf("Yea, you got the hint, you died. Why did you just stand there again? \n");
																		printf("\n");
																		puts(RED"GAME OVER\n"RESET);
																		
																		exit(EXIT_SUCCESS);
																	}
																}
																}
																
																else if(strcasecmp(option, "disarm") == 0)
																{
																	printf("You disarm yourself but the man raises a shot gun. Double barreled side by side cough shot gun. \n");
																	printf("\"I knew you wouldn't, now get the hell out of here or you'll be pushing daisies!\" the criminal shouts \n");
																	printf("There isn't really anything you can do. We'll pretend this didn't happen and restart the chapter. \n");
																	printf("-------------------------------------------------------------------------------------------------\n");
																	
																	goto Menu;
																}
															}
															}
														}
						
														}
														else if(strcasecmp(option, "Back") == 0)
														{
															printf("You've decided to turn back\n");
															printf("------------------------------");
															goto Bank;
														}
												}
												}
												
												else if(strcasecmp(option, "north") == 0)
												{
													printf("You walk toward the door, you hear banging noises like someone is trying to break something");
													printf("'"GREEN"Open"RESET"' to open the door or turn 'back' around?\n");
												while(*option != 'z')
												{
													printf(GREEN "Decision>" RESET);
													scanf("%s", option);
													
														if(strcasecmp(option, "Open") == 0)
														{
															printf("You slowly open the door. You see a overweight man with red plaid shirt and black suspenders.\n");
															printf("He looks as if he is trying to break into a safe.\n");
															printf("Should you '"GREEN"shoot"RESET"' the man or turn '"GREEN"back"RESET"' around?\n");
														while(*option != 'z')
														{
															puts(GREEN "Decision>" RESET);
															scanf("%s", option);
															
															if(strcasecmp(option, "shoot") == 0)
															{
																printf("You shoot your gun and the man's hat flies off his head. \n");
																printf("\"WHAT THE FU-\", the man shouts loudly. He seems to turning around. What do you do?\n");
																printf("'"GREEN"Hide"RESET"' behind the door or '"GREEN"stay"RESET"' where you are at?\n");
															while(*option != 'z')
															{
																printf(GREEN "Decision>" RESET);
																scanf("%s", option);
															
																if(strcasecmp(option, "hide") == 0)
																{
																printf("You suddenly hear \"whoever that was, you are about to meet your maker!\"\n");
																printf("The foot steps sound like they are heading to the door. The criminal is now out the door and right in front of you but his back turned. \n");
																printf("You can '"GREEN"stay"RESET"' there or '"GREEN"hit"RESET"' the man back of his head with your gun. \n");
															while(*option != 'z')
															{
																printf(GREEN "Decision>" RESET);
																scanf("%s", option);
																
																	if(strcasecmp(option, "hit") == 0)
																	{
																		printf("You immediately hit the man in the back of the head. He's out cold. \n");
																		printf("The guy that was hiding in the barrel walks in. He looks a little lanky with blue plaid shirt and Levis denom jeans. \n");
																		printf("Surprisingly, he was strong enough to pick up the man. \"I'm gonna cuff this man before he walks up. Here's award stranger, this man has been wanted for various murder and robbery crimes.\"\n");
																		printf("The man awards you with 500 dollars. He then walks into the back room and notice a gun the ground. It as a double barreled side by side coach shot gun. Boy that would of spelled trouble if he pointed that at you!\n");
																		printf("The guy explains that the jail cannot be opened. One of MadDog's gang members have the key. You better hurry and find out where it's at!");
																		puts(" ");
																		printf("--------- END OF THIS CHAPTER ---------\n");
																		FiveHundred = true;
																		chp1 = true;
																		goto Menu;
																	}
																	
																	else if(strcasecmp(option, "stay") == 0)
																	{
																		printf("The man turned around and he has a shotgun pointed right at you. \" It's best you outta get out of here. it will turn ugly\" He tells you \n");
																		printf("He's not wrong, you better get out of here and restart this chapter. Any further and your a dead man. \n");
																		printf("-----------------------\n");
																		goto Menu;
																	}
															}
																}
																else if(strcasecmp(option, "stay") == 0)
																{
																	printf("You decided to stay right where you are at. The door opens very fast. The man is now right in front of you.\n");
																	printf("\"Boy it is best you outta leave now or you'll be sleeping six feet under the ground.\"\n");
																	printf("Standing there wasn't a good idea. What is a good idea is trying this chapter again\n");
																	printf("You are now returning to the main menu.\n");
																	printf("---------------------------------------\n");
																	
																	goto Menu;
																}
															}
															}
																
															else if(strcasecmp(option, "back") == 0)
															{
																printf("You've turned around back\n");
																printf("-------------------------\n");
																
																goto Bank;
															}
														}
																
														}
														
														else if(strcasecmp(option, "back") == 0)
														{
															printf("You've turned around back\n");
															printf("-------------------------\n");
															goto Bank;
															
														}
												}
													
												}
												
												else if(strcasecmp(option, "back") == 0)
												{
													goto Menu;
												}
											}
								}
								
								if(choice == 1 && chp1 == true)
								{
									printf("THIS CHAPTER IS COMPLETE. CHOOSE ANOTHER CHAPTER. \n");
									printf(GREEN "------------------------------------------------- \n" RESET);
									goto Menu;
								}
						
								if(choice == 2 && chp2 == false)
								{
									printf("You walk into the Saloon, everyone stares at you like they've never seen a human \n");
									puts("You walk toward the stools at the bar. A man with a bow tie and handle bar mustache approaches you and ask \"What will it be?\"");
									puts("With no words to say, the bartender just pours a shot of whiskey. Bartender then whispers to you \"those men to the left side playing cards are part of MadDog's gang. Keep an eye on them. They have the key to free the sheriff.\"");
									puts("\"HEY!\" One of the men on the left side of you shout, \" I ain't never seen you before, who are you? \" It's three men over to your left.");
									printf("\n1. The name's %s, what's it to ya? \n2. None of your Goddamn business! \n3. Turn around back\n", name);
									while(choice != 99)
									{
									scanf("%d", &choice);
										
										if(choice == 1 && FiveHundred == false)
										{
											printf("\"Well you better not be planning stealing the key to free the sheriff!\" The man in the middle yells.\n");
											printf("You can say you are '"GREEN"going"RESET"' to do it or so '"GREEN"what"RESET"' if you are.\n");
											while(*option != 'z')
											{
											printf(GREEN "Decision>" RESET);
											scanf("%s", option);
											
											if(strcasecmp(option, "going") == 0)
											{
												printf("\"Yea, I am and there's nothing you can do \", you tell the men. \n");
												printf("Bad idea, all the three men over to the left pull their guns and point it at you. \n");
												printf("Let's pretend that this didn't happen and do this chapter again. \n");
												printf("---------------------------------------------------------------- \n");
												printf("\n");
												
												goto Menu;
											}
											
											else if(strcasecmp(option, "what") == 0)
											{
												printf("\"What if I am?\", you ask the man with his other crew. \n");
												printf("\"Well I got the key!\" the man in the middle shouts at you while he jingle the keys in his left hand. \n");
												printf("His men around him seem to be smirking; they know you aren't getting the keys. \n");
												printf("However you are confident. You tell them \"Well we can do this the easy way... or the hard way \" \n");
												printf("The minute you've said that, the three men got serious and got their hand on their holsters. \n");
												
												fight:
												printf("\"Well it seems we'll be doing the hard way. Any last wishes?\", you got some guts, I'll tell you what. \n");
												printf("You are now in a shoot out. This is a chance of random (numbers between 1 to 10 to be exact). If you take the challenge to face these men, you better hope you got a date with lady luck (sexy)\n");
												printf("BUT if you aren't lucky, it could be game over. You can 'take' the challenge or go 'back' to restart this chapter.\n");
												printf("If your number lands a 1, 4, or 8. The RESET will just reset will count as a miss. (NOTE: LOSING WILL END UP IN A GAME OVER!)\n");
												printf("If you are up to it, just type '"GREEN"take"RESET"', if not just type '"GREEN"back"RESET"'. GOOD LUCK!\n");
												while(*option != 'z')
												{	
												printf(GREEN "Decision>" RESET);
												scanf("%s", option);
												
												if(strcasecmp(option, "take") == 0)
												{
												
													
													int try=0,hit=0,need=0,left=0, miss=0;
													
													for(try = 5; try > 0; try--)
													{
														
													take = rand() % 10 + 1;
													
														if(take == 1 || take == 4 || take == 8)
														{
															hit++;
															
															need = 3 - hit;
															
															printf("You've rolled at %d, it's a hit! That's %d, %d to go!\n",take, hit, need);
															
															if(hit == 3)
																{
																	printf("You've won the shoot out. All three men are in a state of shock. The man on the right hat has flown off. The left had his gun shot off his hand. The one in the middle completely dropped the keys \n");
																	printf("\"Now get out of here! All of you! Oh don't forget to drop the keys and don't let the door hit your ass on the way out!\" All men run out scared. Everyone in the bar was as shock to see you win the battle.");
																	printf("\"Gee, lady luck was surely on your side, stranger!\" The bartender compliments in an encouraging way. You grab the keys and begin walking out the bar.\n");
																	printf("However, you stop right at the door, turn your head to the crowed and say \"it's all in a days work... and sorry for the mess.\"\n");
																	printf("Congrats on winning the bar fight and just skipping chapter one! (Feel free to play chapter one)\n");
																	printf("--------- END OF THIS CHAPTER ---------\n");
																	key = true;
																	chp2 = true;
																	goto Menu;
																}	
															
															printf("Type '"GREEN"roll"RESET"' to try again!\n");
															scanf("%s", option);
															
														}
														else
														{
															miss++;
															
															printf("You've rolled a %d, that's a miss... \n", take);
															
															if(miss == 3)
																{
																	printf("The shoot out didn't go in your favor. Bullets are flying left and right. Every bullet you had missed all three men. \n");
																	printf("The whole saloon is now an entire battle royale. You aren't the gun slinger wizard as you thought you were. \n");
																	printf("It's not easy to say this but you took more bullets than it took the tries. \n");
																	printf(RED"GAME OVER\n"RESET"HINT: COMPLETING CHAPTER ONE WILL RESULT THIS CHAPTER DIFFERENTLY\n");
																	
																	exit(EXIT_SUCCESS);
																}
																	
															printf("Type '"GREEN"roll"RESET"' to try again!\n");	
															scanf("%s", option);
														}
													
													}
													
												}
												
												else if(strcasecmp(option, "back") == 0)
												{
													puts("You've decided to go back. It was perhaps for the best. \n");
													puts("------------------------------------------------------- \n");
													
													goto Menu;
												}
												}
											}
											}
										}
										else if(choice == 1 && FiveHundred == true)
											{
												printf("\"Well you better not be planning stealing the key to free the sheriff!\" The man in the middle yells.\n");
												printf("You can say you are '"GREEN"going"RESET"' to do it or so '"GREEN"what"RESET"' if you are.\n");
												while(*option != 'z')
												{	
												printf(GREEN"Decision>"RESET);
												scanf("%s", option);
												
												if(strcasecmp(option, "going") == 0)
												{
													printf("\"Yea, I am and there's nothing you can do \", you tell the men. \n");
													printf("Bad idea, all the three men over to the left pull their guns and point it at you. \n");
													printf("Let's pretend that this didn't happen and do this chapter again. \n");
													printf("---------------------------------------------------------------- \n");
													printf("\n");
													
													goto Menu;
												}
												
												else if(strcasecmp(option, "what") == 0)
												{
													printf("\"What if I am?\", you ask the man with his other crew. \n");
													printf("\"Well I got the key!\" the man in the middle shouts at you while he jingle the keys in his left hand. \n");
													
													bribe:
													printf("His men around him seem to be smirking, they know you aren't getting the keys. \n");
													printf("However you are confident. You say to them, \"Well I'll tell you what, we'll play a game. I'll take you on in a game of Vingt et Un for the key. \" \n");
													printf("\"Yea? And what do you got to make such a bet?\", the man scoffs. From your pocket, you pull the five-hundred dollars from your award. \n");
													printf("All three men eyes widen. \"I win, the key is mine. If I lose, the money is yours.\"\n");
													printf("They seem skeptical but the man in the middle looked as if he knows he'll win. He accepts the challenge.\n");
													printf("--------------------------------------------------------------------------------------------------\n");
													printf("The rules of Vingt et Un (BlackJack) is simple. You must beat the dealers hand by having the higher card value. Dealer must hit till the dealer's cards value are matching or above seventeen.\n");
													printf("Your options will be: \n");
													printf("'Hit' - To get cards \n'Stand' - Stay with the cards that drawn \n'Double' - Double your bet however you can only draw one card \n'Split'(If necessary) - Will spit your hand if the cards are even \n");
													printf("----------------------------------------------------------------- \n");
													printf("Additional information: \n");
													printf("Your and the dealer's cards value must stay under twenty-one or you will bust! You must win three games to proceed. \n");
													printf("If you are up to it, just type '"GREEN"take"RESET"', if not just type '"GREEN"back"RESET"'. GOOD LUCK!\n");
													while(*option != 'z')
													{	
													printf(GREEN"Decision>"RESET);
													scanf("%s", option);
													
													
													if(strcasecmp(option, "take") == 0)
													{
														int PC1=0, PC2, PC3, COM1, COM2, COM3, left=0, i,j,PT, CT;
														int win=0, lose=0;
														int *ptr1, *ptr2, *ptr3, *ptr4, *whole;
														
														
														int Deck1[13] = {1,2,3,4,5,6,7,8,9,10,10,10,10};
														int Deck2[13] = {1,2,3,4,5,6,7,8,9,10,10,10,10};
														int Deck3[13] = {1,2,3,4,5,6,7,8,9,10,10,10,10};
														int Deck4[13] = {1,2,3,4,5,6,7,8,9,10,10,10,10};
														
														ptr1 = Deck1;
														ptr2 = Deck2;
														ptr3 = Deck3;
							 							ptr4 = Deck4;
														
														shuffle(ptr1, ptr2, 13);
														shuffle(ptr3, ptr4, 13);
														shuffle(ptr2, ptr4, 13);
														shuffle(ptr1, ptr3, 13);
														shuffle(ptr3, ptr2, 13);
														shuffle(ptr4, ptr1, 13);
														
														for(j = 5; j >= 0; j--)
														{

														i = (rand()% 13) + 1;
														
														PC1 = *(ptr3 + i);
														PC2 = *(ptr4 + i);
														COM1 = *(ptr2 + i);
														COM2 = *(ptr3 + i);
						
														if(PC1 == 1 || PC2 == 1)
														{
															if(PC1 == 1 && PC2 != 1)
															{
																PC1 = PC1 + 10;
															}
															if(PC1 == 1 && PC1 != 1)
															{
																PC2 = PC2 + 10;
															}
															if(PC1 == 1 && PC2 == 1)
															{
																PC1 = PC1 + 10;
															}
														}	
														
														if(COM1 == 1 || COM2 == 1)
														{
															if(COM1 == 1 && COM2 == 10)
															{
																COM1 = COM1 + 10;
																
																printf("Dealer have a ace with a %d, dealer wins.. you have %d left", PC2,j);
															}
															if(COM2 == 1 && COM1 == 10)
															{
																COM2 = COM2 + 10;
																printf("You have a ace with a %d, dealer wins.. you have %d left", PC2,j);
															}
															if(COM1 == 1 && COM2 != 1)
															{
																COM1 = COM1 + 10;
															}
															if(COM2 == 1 && COM1 != 1)
															{
																COM2 = COM2 + 10;
															}
															if(COM1 == 1 && COM2 == 1)
															{
																COM1 = COM1 + 10;
															}
															
														}
														PT = PC1 + PC2;
														CT = COM1 + COM2;
														printf("You are presented with %d and %d. A %d total card value. ", PC1, PC2, PT);
														printf("Dealer has a %d faced up. \n", COM1);
														
														move:
														printf("What is your move?\n");
														printf(GREEN "Decision>" RESET);
														scanf("%s", option);

														
														if(strcasecmp(option, "hit") == 0)
														{
															hit:
															
															i = rand()% 13;
															
															PC3 = *(ptr3 + i);
															
															PT = PT + PC3;
															
															if(PT > 21)
															{
																bust:
																lose++;
																printf("A %d card flips\n", PC3);
																printf("Your cards values at %d. You busted, you lose this hand.\n", PT);
																if(lose == 3)
																{
																	goto lost;
																}
																printf("Type '"GREEN" deal "RESET"' to continue. \n");
																scanf("%s", option);

															}
															else if(PT == 21)
															{
																win++;
																left = 3 - win;
																printf("A %d card flip which makes your total cards value %d\n", PC3, PT);
																printf("BLACKJACK! Congrats!\n");
																printf("That's %d,%d to go!\n", win, left);
																if(win == 3)
																{
																	goto winner;
																}
																printf("Type '"GREEN" deal "RESET"' to continue. \n");
																scanf("%s", option);
															}
															else if(PT < 21)
															{
																printf("A %d card flips \n", PC3);
																printf("Your new total is %d, what is your next move?\n", PT);
																printf(GREEN "Decision>" RESET);
																scanf("%s", option);

																
																	if(strcasecmp(option, "hit") == 0)
																	{
																		goto hit;
																	}
																	
																	if(strcasecmp(option, "stand") == 0 || strcasecmp(option, "stay") == 0)
																	{
																		goto stand;
																	}
	
															}
															
														}
														
														if(strcasecmp(option, "double") == 0)
														{
															
															i = rand()% 13;
															
															PC3 = *(ptr4 + i);
															
															PT = PT + PC3;
															
															if(PT > 21)
															{
																goto bust;
															}
															else if(PT == 21)
															{
																win++;
																left = win - 3;
																printf("BLACKJACK! Congrats!\n");
																printf("That's %d,%d to go!\n", win, left);
																if(win == 3)
																{
																	goto winner;
																}
																printf("Type '"GREEN" deal "RESET"' to continue. \n");
																scanf("%s", option);
															}
															else if (PT < 21)
															{
																printf("A %d card flips.", PC3);
																printf("Your new total is %d", PT);
																goto stand;
															}
														}
														if(strcasecmp(option, "split") == 0)
														{
															if(PC1 != PC2)
															{
																printf("You cannot split your cards.\n");
																goto move;
															}
															
															if(PC1 == PC2)
															{
																i = rand()% 13;
																
																PC3 = *(ptr4 + i);
																
																int PT1 = PC1 + PC3;
																
																printf("You're first hand shows a %d and %d. Total card value of %d. What is your move?\n", PC1, PC3, PT1);
																do
																{	
																	printf(GREEN"Decision>"RESET);
																	scanf("%s", option);
																	
																	if(strcasecmp(option, "hit") == 0)
																	{
																	i = rand()% 13;
																
																	PC3 = *(ptr3 + i);
																
																	PT1 = PT1 + PC3;
																	
																	printf("Next card is a %d. Giving you %d total value.\n", PC3, PT1);
																		if(PT1 > 21)
																		{
																			lose++;
																			printf("A %d card flips\n", PC3);
																			printf("Your cards values at %d. You busted, you lose this hand. You have %d tries left\n", PT, j);
																			if(lose == 3)
																			{
																				goto lost;
																			}
																			printf("Type '"GREEN" stand "RESET"' to continue. \n");
																			scanf("%s", option);
																			continue;
																		}
																	}
																}
																while(!strcasecmp(option, "stand") == 0);
																
																i = rand()% 13;
																
																int PC4 = *(ptr4 + i);
																
																int PT2 = PC1 + PC4;
																
																printf("You're second hand shows a %d and %d. Total card value of %d. What is your move?\n", PC1, PC4, PT2);
																do
																{	
																	printf(GREEN"Decision>"RESET);
																	scanf("%s", option);
																	
																	if(strcasecmp(option, "hit") == 0)
																	{
																	i = rand()% 13;
																
																	PC4 = *(ptr3 + i);
																
																	PT2 = PT2 + PC4;
																	
																	printf("Next card is a %d. Giving you %d total value.\n", PC4, PT2);
																	if(PT2 > 21)
																		{
																			lose++;
																			printf("A %d card flips\n", PC3);
																			printf("Your cards values at %d. You busted, you lose this hand.\n", PT);
																			if(lose == 3)
																			{
																				goto lost;
																			}
																			printf("Type '"GREEN" continue "RESET"' to continue. \n");
																			scanf("%s", option);
																			continue;
																		}
																	}
																}
																while(!strcasecmp(option, "stand") == 0);
																
																printf("Dealer's cards are %d and %d. Total of %d card value.\n", COM1, COM2, CT);
																
																while(CT < 17)
																{
																	i = rand()% 13;
																	
																	COM3 = *(ptr3 + i);
																	
																	CT = CT + COM3;
																	
																	printf("Dealer hits a %d.\n", COM3);
																	printf("Dealer has a %d in total.\n", CT);
																	
																}
																if(CT > 21)
																{
																	win++;
																	printf("Your first card present a total card value of %d. \n", PT);
																	printf("Dealer presents a %d. Dealer bust, you win this hand!. \n", CT);
																	printf("That's %d,%d to go!\n", win, left);
																	if(win == 3)
																	{
																	  goto winner;
																	}
																	printf("Type '"GREEN" Deal "RESET"' to continue. \n");
																	scanf("%s", option);
																}
																else if(CT > PT1)
																{
																	lose++;
																	printf("Your first card present total card value of %d. \n", PT1);
																	printf("Dealer wins this hand...\n");
																	if(lose == 3)
																	{
																		goto lost;
																	}
																	
																}
																else if(PT1 > CT)
																{
																	win++;
																	left = 3 - win;
																	printf("Your first card present total card value of %d. \n", PT1);
																	printf("Dealer presents a %d. You won this hand!\n", CT);
																	if(win == 3)
																	{
																		goto winner;
																	}
																	printf("That's %d,%d to go!\n", win, left);

																	
																}
																else if(PT1 == CT)
																{
																	j++;
																	printf("You present total card value of %d. \n", PT1);
																	printf("Dealer presents a %d. This is a push.\n", CT);
																	
																}
																else if(CT > PT2)
																{
																	printf("Your first card present total card value of %d. \n", PT2);
																	printf("Dealer wins this hand...\n");
																	lose++;
																	if(lose == 3)
																	{
																		goto lost;
																	}
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
																	
																	
																}
																else if(PT2 > CT)
																{
																	win++;
																	if(win == 3)
																	{
																		goto winner;
																	}
																	left = 3 - win;
																	printf("You present total card value of %d. \n", PT2);
																	printf("Dealer presents a %d. You won this hand!\n", CT);
																	printf("That's %d,%d to go!\n", win, left);
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
																	
																	
																}
																else if(PT2 == CT)
																{
																	j++;
																	printf("You present total card value of %d. \n", PT2);
																	printf("Dealer presents a %d. This is a push. \n", CT);
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
																}
																
																
															}
																	
																	
														}
														
														if(strcasecmp(option, "stand") == 0 || strcasecmp(option, "stay") == 0)
														{
							
																stand:
																printf("Dealer's cards are %d and %d. Total of %d card value.\n", COM1, COM2, CT);
																
																while(CT < 17)
																{
																	i = rand()% 13;
																	
																	COM3 = *(ptr3 + i);
																	
																	CT = CT + COM3;
																	
																	printf("Dealer hits a %d.\n", COM3);
																	printf("Dealer has a %d in total.\n", CT);
																	
																}
																if(CT > 21)
																{
																	win++;
																	left = 3 - win;
																	printf("You present a total card value of %d. \n", PT);
																	printf("Dealer presents a %d. Dealer bust, you win this hand!. \n", CT);
																	if(win == 3)
																		{
																			goto winner;
																		}
																	printf("That's %d,%d to go!\n", win, left);
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
																}
																else if(CT > PT)
																{
																	lose++;
																	printf("You present total card value of %d. \n", PT);
																	printf("Dealer presents a %d, dealer wins...\n", CT);
																	if(lose == 3)
																	{
																		lost:
																		printf("You've lost three times. It seems lady luck wasn't on your side.\n");
																		printf("You can have another shot once we restart this chapter or you could take and alternate path\n");
																		printf("You'll now go back to the menu\n");
																		printf("-------------------------------\n");
																		goto Menu;
																	}
																	
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
																	
																}
																else if(PT > CT)
																{
																	win++;
																	left = 3 - win;
																	printf("You present total card value of %d. \n", PT);
																	printf("Dealer presents a %d. You won this hand!\n", CT);
																	printf("That's %d,%d to go!\n", win, left);
																	if(win == 3)
																		{
																			winner:
																			printf("You beat the man for the sheriff's key. \"Well if you still think I'm giving it, forget it!\" the man assertively tells you.\n");
																			printf("\"Just hand 'em the key! The stranger won fair and square!\" the man on the left shouts at the man you beat.\n");
																			printf("With a mad grin on his face, the man you beat puts the key on the table. All three out laws start walking out the bar but before they walk out, you shout \"hey!\".\n");
																			printf("As they turn, you toss three-hundred of your money toward the men. That's more than half of your award! \"I don't need this much, you men take it and clean yourself up. Don't worry, I will never rat ya'll wrongful doings.\", you tell the men.\n");
																			printf("With all three men in shocking in despair, one of them thanks you. Your great generosity will certainly keep those men out of town. Now lets get the sheriff out of jail and put an end to MadDog for good!\n");
																			printf("--------- END OF THIS CHAPTER ---------\n");
																			key = true;
																			chp2 = true;
																			goto Menu;
																		}
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
							
																}
																else if(PT == CT)
																{
																	j++;
																	printf("You present total card value of %d. \n", PT);
																	printf("Dealer presents a %d. This is a push.\n", CT);
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
																}
														}
														}
													}
													
													else if(strcasecmp(option, "back") == 0)
													{
														puts("You've decided to go back. \n");
														puts("-------------------------- \n");
														
														goto Menu;
													}
													}
												
												}

												}
												
												
											}
											
										if(choice == 2 && FiveHundred == true)
										{
											printf("\"Want to say that again?!\" The man yells as he's reaching for his gun\n");
											printf("\"I would outta apologize if I was you!\"\n");
											printf("You can '"GREEN"apologize"RESET"' or stay '"GREEN"silent"RESET"'. The choice is yours.\n");
											while(*option != 'z')
											{
											printf(GREEN"Decision>"RESET);
											scanf("%s", option);
											
											if(strcasecmp(option, "apologize") == 0)
											{
												apologized:
												
												printf("You tell the man you are sorry for your actions. \n");
												printf("He tells you, \"yea, that's what I thought!\"\n");
												printf("There isn't going anywhere from here, lets try that again.\n");
												
												goto Menu;
											}
											
											else if(strcasecmp(option, "silent") == 0)
											{
												printf("You stay silent while staring at the man... intimidately.\n");
												printf("\"Hey, did you hear what I said?? You better apologize!\", the man shouts at you. \n");
												printf("He seems to be getting agrivated. You may find yourself in a gun fight.\n");
												printf("\"Hey boy! If you don't apologize now, I'll make you apologize!\" This is it! You are in big troulbe now!\n");
												printf("You can still get yourself out of this, that five-hundred you got can be handy. type '"GREEN"bribe"RESET"' to cool things down\n");
												printf("type '"GREEN"pull"RESET"' to fight this guy or type '"GREEN"back"RESET"' to go back to the menu.\n");
												printf(GREEN"Decision>"RESET);
												scanf("%s", option);
												
												if(strcasecmp(option, "bribe") == 0)
												{
													goto bribe;
												}
												
												else if(strcasecmp(option, "pull") == 0)
												{
													goto fight;
												}
												
												else if(strcasecmp(option, "back") == 0)
												{
													printf("You decided to go back\n");
													printf("----------------------\n");
													
													goto Menu;
												}
											}
											}
										}
										
										else if(choice == 2 && FiveHundred == false)
										{
											printf("\"Want to say that again?!\" The man yells as he's reaching for his gun\n");
											printf("\"I would outta apologize if I was you!\"\n");
											printf("You do not have anything but your gun to back yourself. You can tango with this guy or go back. \n");
											printf("Type '"GREEN"fight"RESET"' to get yourself in a gun fight or '"GREEN"back"RESET"' to try this again. \n");
											while(*option != 'z')
											{	
											printf(GREEN"Decision>"RESET);
											scanf("%s", option);
											
											if(strcasecmp(option, "fight") == 0)
											{
												goto fight;
											}
											
											else if(strcasecmp(option, "back") == 0)
											{
												printf("You decided to go back.\n");
												printf("-----------------------\n");
												
												goto Menu;
											}
											}
										}
										else if(choice == 3);
										{
											printf("You decided to go back\n");
											printf("------------------------\n");
											goto Menu;
										}
									}
								}
								if(choice == 2 && chp2 == true)
								{
									printf("THIS CHAPTER IS COMPLETE. CHOOSE ANOTHER CHAPTER. \n");
									printf("------------------------------------------------- \n");
									goto Menu;
								}
								if(choice == 3 && chp3 == false && key == false)
								{
									printf("You open the door to the jail house. You hear a voice yell \"who's there?\"\n");
									printf("You approach to the jail cell, you see it's the town sheriff. \"the name's %s, I'm here to run MadDog and his gang out.\"\n", name);
									printf("\"Boy, am I glade to hear that!\" the sheriff tells you.\"You see, MadDog and his gang out number me and my deputies. They completely over ran us. \nYou got to let me out and stop this shenanigans. Do you have the keys to the cells?\"\n");
									printf("Unfortunately, you don't have the keys, the sheriff tells you that the guy who locked the sheriff may be in the saloon but he only heard that from that criminal on the way out of the jail house\n");
									printf("He furthermore tells you that the man is very hard to deal with though he is dense. A huge gambling man. It's best to find some money and win that key at any cost.\n");
									printf("\"Now don't try to nagociate or challenge this man,\" the sheriff tells you, \"it may end in a deadly way. Now please go and get me out of here!\" \n");
									printf("You will now return to the main menu.\n");
									printf("-------------------------------------\n");
									
									goto Menu;
								}
								
								if(choice == 3 && chp3 == false && key == true)
								{
									printf("You open the door to the jail house. You hear a voice yell \"who's there?\"\n");
									printf("You approach to the jail cell, you see it's the town sheriff. \"the name's %s, I'm here to run MadDog and his gang out.\"\n", name);
									printf("\"Boy, am I glade to hear that!\" the sheriff tells you.\"You see, MadDog and his gang out number me and my deputies. They completely over ran us. \nYou got to let me out and stop this shenanigans. Do you have the keys to the cells?\"\n");
									printf("You pull the jail keys from your pocket. As you release the sheriff, you hear a click but it isn't a the jail unlocking, it's the sound of a revolver being ready to shoot.\n");
									printf("You turn to the left of you and see a pretty build man in a brown vest with a long brown jacket with brown pants. He has the revolver pointed at you\n");
									printf("\"Okay stranger, jump the keys and no one gets hurt\", the man tells you. Should you '"GREEN"drop"RESET"' it or '"GREEN"go"RESET"' for your gun?\n");
									while(*option != 'z')
									{
									printf(GREEN"Decision>"RESET);
									scanf("%s", option);
									
									
										if(strcasecmp(option, "drop") == 0)
										{
											printf("\"That's right fellar,\" the man tells you, \"drop the keys and move back, don't do anything stupid\"\n");
											printf("As soon as the man grabbed the keys from the lock, the sheriff grabbed the outlaws wrist\n");
											printf("The outlaw's left hand which is holding the gun is going over to the sheriff. This is a wise decision, what should you do?\n");
											printf("Pull your gun and '"GREEN"shoot"RESET"' the man or try to throw a '"GREEN"punch"RESET"'?\n");
											while(*option != 'z')
											{
											printf(GREEN"Decision>"RESET);
											scanf("%s", option);
											
												if(strcasecmp(option, "shoot") == 0)
												{
													printf("You pull your gun and shoot the outlaw. His gun falls right out of his hands\n");
													printf("Immediately, the sheriff punches the outlaw, he is now outcold.\n");
													printf("You run toward the jail cell and free the sheriff. \"Let's put this hooligan behind bars.\" The sheriff tells you\n");
													printf("The sheriff walks out of the jail house and you follow behind. He grabs his belt and raises his pants. \"MadDog! You don't stand a chance!\" He says proudly.\n");
													printf("\"I know his girlfriend is at the post office. He may be hidding out there. Lets go %s! Oh by the way, the name is sheriff Moore!\" Sheriff Moore says while tipping his hat.\n", name);
													printf("It's time to head to the post office and finally put an end to this madness!\n");
													printf("--------- END OF THIS CHAPTER ---------\n");
													sheriff = true;
													chp3 = true;
													
													goto Menu;
												}
												
												else if(strcasecmp(option, "punch") == 0)
												{
													printf("You throw a punch to the outlaw. His gun fires but no one got hit. You immediately unlock the jail cell for the sheriff\n");
													printf("\"Thank you kindly, %s. The name is sheriff Moore.\" The sheriff tells you while he tips his hat.\n", name);
													printf("\"Quick lets put this hooligan behind bars before he wakes up.\" Sheriff Moore tells you as he puts the outlaw in jail\n");
													printf("Soon after, you both walk outside the jail cell, \"MadDog! You don't stand a chance!\" He says proudly. \"I know his girlfriend is at the post office. He may be hiding out there. Lets go, %s!\n", name);
													printf("It's time to head to the post office and finally put an end to this madness!\n");
													printf("--------- END OF THIS CHAPTER ---------\n");
													sheriff = true;
													chp3 = true;
													
													goto Menu;
												}
											
											}
										}
										
										else if(strcasecmp(option, "go") == 0)
										{
											printf("You reach for your gun but the outlaw immediately shot it out of your hand.\n");
											printf("This is pretty much a dead end. Let's take you back to the menu and try this again.\n");
											printf("-----------------------------------------------------------------------------------\n");
											
											goto Menu;
										}
											
									}
									
								}
								
								if(choice == 3 && chp3 == true)
								{
									printf("THIS CHAPTER IS COMPLETE. CHOOSE ANOTHER CHAPTER. \n");
									printf("------------------------------------------------- \n");
									goto Menu;
								}
									
								if(choice == 4 && sheriff == false)
								{
									printf("You walk into the Post Office. A fine lady walks to the front counter. Though she isn't like any other lady. She is dressed like the rest of the cowboys.\n");
									printf("\"How can I help you darling?\" The lady ask you. You ask her about MadDog and his whereabouts. She seems slightly distraught when you asked that question but she answers,\"I know his gang is controlling town but I don't know where he is.\"\n");
									printf("She isn't giving much information, there isn't much to do here. She ask you \"listen sugar, if I see him, I'll report to you immediately\", the way she said that sounds dishonest but it's all you got.\n");
									printf("We may need someone who has more information. You will now return to the main menu. \n");
									printf("----------------------------------------------------------------------------------- \n");
									
									goto Menu;
								}
								
								if(choice == 4 && sheriff == true)
								{
									printf("You walk into the Post Office. A fine lady walks to the front counter. Though she isn't like any other lady. She is dressed like the rest of the cowboys.\n");
									printf("\"How can I help you darling?\" The lady ask you. You ask her about MadDog and his whereabouts. She seems slightly distraught when you asked that question but she answers,\"I know his gang is controlling town but I don't know where he is.\"\n");
									printf("She isn't giving much information. \"Perhaps you do, Mrs. Logan\", sheriff Moore says as he walks into the Post Office. \"Now ma'am, stop playing these charades and tell use where Clayton 'MadDog' Logan is at.\" Moore says assertively.\n");
									printf("Ms. Logan is now very distraught, she tells sheriff Moore \"I have no idea what you're talking about. This is an outrage, what gives you authority to just start questioning things like this?\"\n");
									printf("\"You see, I'm the sheriff of this town. My partner, %s, got me out of the jail that YOUR husband locked me in. He also cleaned out the town from MadDog's hooligans. Now Mandy Logan, please, tell us where MadDog is!\"\n", name);
									printf("She is very furious now, she yells \"what makes you think I'm gonna rat my husband out? We still have control of the town, you have to do better then that officer!\"\n");
									printf("As she says that, she pulls out a gun, a Sharps Rifle and points it right at the sheriff.\n");
									while(*option != 'z')
									{
									printf("You can '"GREEN"reach"RESET"'for the gun or '"GREEN"attack"RESET"' the wroman. The choice is yours");
									printf(GREEN"Decision>"RESET);
									
										if(strcasecmp(option, "hit") == 0)
										{
											printf("You reach for the gun and pushed the barrel away from the officer just as soon as she made her shot.\n");
											printf("\"What the hell was that?!\" you hear a distinct voice heard from another room \"That's it you've guys done it now.\" Mandy try blaming you two.\n");
											printf("A man with long neck length black hair, a dark cowboy hat, brown vest and red tie with a dark long jacket wearing brown jeans steps into the Post Office lobby\n");
											printf("He is surprise to see sheriff Moore standing right in front of him. \"What in the world is going on? How did you get out??\"\n");
											printf("\"This guy has been causing trouble around town, hun. He chased our men and let the sheriff out of jail\" Mandy said about you.\n");
											printf("MadDog is very frustrated. He immediately pulls his pistol and says \"come on, babe, lets have good ole fun. Lets finish these two!\"\n");
											printf("You found yourself in a shoot out. Stakes are high, you must roll 3 or better. It is best out of 3. You win twice, MadDog is done, you lose twice you are done. \n");
											printf("Type '"GREEN"ready"RESET"' if you are ready to end MadDog's wrongful doings\n");
											printf(GREEN"Decision>"RESET);
											scanf("%s", option);

											while(*option != 'z')
											{
												if(strcasecmp(option, "ready") == 0)
												{
													int try=0,hit=0,need=0,left=0, miss=0;
													
													for(try = 5; try > 0; try--)
													{
														
													take = rand() % 6 + 1;
													
														if(take >= 3)
														{
															hit++;
															
															need = 2 - hit;
															
															printf("You've rolled at %d, it's a hit! That's %d, %d to go!\n",take, hit, need);
															
															if(hit == 2)
																{
																	printf("You've won the shoot out. You and the officer shot both of Mandy and Clayton guns out of their hands. \n");
																	printf("Even if they pick up their guns, they are out of ammo both outlaws have no choice but to flee.\n");
																	printf("MadDog and his wife run to the back of the Post Office through to the back door. You and sheriff Moore chase after them.\n");
																	printf("Out in the back door, there are two horses which MadDog and Mandy jump on receptively\n");
																	printf("\"You listen to me, buddy!\" MadDog shouts at you,\"This isn't over! You haven't heard the last of MadDog!\" Both Mandy and Clayton ride off fast. \n");
																	printf("\"Let 'em go\" sheriff Moore tells you. \"They'll meet their maker one day. They can't always run forever. You were brave, son. Tell me, where are going to go now?\"\n");
																	printf("\"I'm going home,back into that same portal that brought me here in the first place!\"\n");
																	printf("MadDog wasn't wrong about saying he's going to see you again. You actually received a letter from Western Union... somehow on your computer.\n");
																	printf("To see it just type '"GREEN"cat MadDog.txt"RESET"'\n");
																	printf("--------- THE END ---------\n");
																	wptr = fopen(FILE_NAME, "w");
																	fclose(wptr);
																	fprintf(wptr, "Hey %s!\n\nThis is Clayton 'MadDog' Logan. Don't worry about how I send this letter from the past to you.\nThat's the least of your concern.\nI am sending this to you to remind you that you haven't seen the last of me!\n\n\nYour pal,\nMadDog\n", name);
																	
																	exit(EXIT_SUCCESS);
																}	
															
															printf("Type '"GREEN"roll"RESET"' to try again!\n");
															scanf("%s", option);
															
														}
														else
														{
															miss++;
															
															printf("You've rolled a %d, that's a miss... \n", take);
															
															if(miss == 2)
																{
																	printf("The shoot out didn't go in your favor. \n");
																	printf("You and the sheriff ran out of ammo. Soon you both found yourselves in quite the pickle. \n");
																	printf("I would tell you what happens next but lets keep the violence at PG-13. \n");
																	printf(RED"GAME OVER\n"RESET);
																	
																	exit(EXIT_SUCCESS);
																}
																	
															printf("Type '"GREEN"roll"RESET"' to try again!\n");	
															scanf("%s", option);
														}
													
													}
												}
											}
										}
										
										else if(strcasecmp(option, "nothing") == 0);
										{
											printf("You've tried attacking the woman by charging her over the counter but it's too late.\n");
											printf("The sheriff has been shot, he is laying on the ground wounded. \n");
											printf("\"What the hell was that?!\" you hear a distinct voice heard from another room \"That's it you've guys done it now.\" Mandy try blaming you two.\n");
											printf("A man with long neck length black hair, a dark cowboy hat, brown vest and red tie with a dark long jacket wearing brown jeans steps into the Post Office lobby\n");
											printf("He is surprise to see sheriff Moor laying on the ground. \"What in the world is going on? How did he get out??\"\n");
											printf("\"This guy has been causing trouble around town, hun. He chased our men and let the sheriff out of jail\" Mandy said about you.\n");
											printf("MadDog is very frustrated. He immediately pulls his pistol and says \"come on, babe, lets have good ole fun. Lets finish these asshole!\"\n");
											printf("You found yourself in a shoot out. Stakes are high, you must roll 5 or better. It is best out of 3. You win twice, MadDog is done, you lose twice you are done. \n");
											printf("Type '"GREEN"ready"RESET"' if you are ready to end MadDog's wrongful doings\n");
											while(*option != 'z')
											{	
											printf(GREEN"Decision>"RESET);
											scanf("%s", option);
											
											if(strcasecmp(option, "ready") == 0)
												{
													int try=0,hit=0,need=0,left=0, miss=0;
													
													for(try = 4; try > 0; try--)
													{
														
													take = rand() % 6 + 1;
													
														if(take >= 3)
														{
															hit++;
															
															need = 2 - hit;
															
															printf("You've rolled at %d, it's a hit! That's %d, %d to go!\n",take, hit, need);
															
															if(hit == 2)
																{
																	printf("You've won the shoot out. You shot both of Mandy and Clayton guns out of their hands. \n");
																	printf("Even if they pick up their guns, they are out of ammo both outlaws have no choice but to flee.\n");
																	printf("MadDog and his wife run to the back of the Post Office through to the back door. You chase after them.\n");
																	printf("Out the back door, there are two horses which MadDog and Mandy jump on receptively\n");
																	printf("\"You listen to me, buddy!\" MadDog shouts at you,\"This isn't over! You haven't heard the last of MadDog!\" Both Mandy and Clayton ride off fast. \n");
																	printf("\"Let 'em go\" sheriff Moore tells you. To your surprise, you are happy to see sheriff survive the shot. \"They'll meet their maker one day. They can't always run forever. You were brave, son. Tell me, where are going to go now?\"\n");
																	printf("\"I'm going home,back into that same portal that brought me here in the first place!\"\n");
																	printf("MadDog wasn't wrong about saying he's going to see you again. You actually received a letter from Western Union... somehow on your computer.\n");
																	printf("To see it just type '"GREEN"cat MadDog.txt"RESET"'\n");
																	printf("--------- THE END ---------\n");
																	
																	wptr = fopen(FILE_NAME, "w");
																	fprintf(wptr, "Hey %s!\n\nThis is Clayton 'MadDog' Logan. Don't worry about how I send this letter from the past to you.\nThat's the least of your concern.\nI am sending this to you to remind you that you haven't seen the last of me!\n\n\nYour pal,\nMadDog\n", name);
																	fclose(wptr);
																	exit(EXIT_SUCCESS);
																}	
															
															printf("Type '"GREEN"roll"RESET"' to try again!\n");
															scanf("%s", option);
															
														}
														else
														{
															miss++;
															
															printf("You've rolled a %d, that's a miss... \n", take);
															
															if(miss == 2)
																{
																	printf("The shoot out didn't go in your favor. \n");
																	printf("You ran out of ammo. With the sheriff down, there is no one to help you. \n");
																	printf("I would tell you what happens next but lets keep the violence at PG-13. \n");
																	printf(RED"GAME OVER\n"RESET);
																	
																	exit(EXIT_SUCCESS);
																}
																	
															printf("Type '"GREEN"roll"RESET"' to try again!\n");	
															scanf("%s", option);
														}
													
													}
												}
											}
										}
									}
								}
						}
								
						}
						
                        else if(choice == 2)
						{
                            puts("\"Please stranger, come back soon! Our town can't take anymore of these hooligans! \"  \n GAME OVER \n");
						
							exit(EXIT_SUCCESS);
						}
                    }
                    break;
                }
            case 10: // Hugo
                {
                    while(choice != 99)
                    {
						int x = 0;
						int guess = 0;
						int balloon;
						int good = 0;
						int bad = 0;
						int typeCount;
						FILE *fp;
						char answer;
						
						//Makes first letter uppercase and the rest lowercase.
						for(int i = 0; name[i] != '\0'; i++)
						{
							if(i==0)
							{
								if((name[i] >= 'a' && name[i] <= 'z'))
								{
									name[i] = name[i] - 32;
								}
								continue;
							}
							
							if(name[i]==' ')
							{
								++i;
								if(name[i]>='a' && name[i]<='z')
								{
									name[i] = name[i] - 32;
									continue; 
								}
							}
							
							else
							{
								if(name[i] >= 'A' && name[i] <= 'Z')
								{
									name[i] = name[i] + 32; 
								}
							}
						}
						
                        puts("\nYou open the door and above you is a very bright light... Relax you're not dying, at least not yet.");
						puts("In front of you are some balloons.");
                        puts("Your options:");
                        puts("1: Pop the balloons.");
                        puts("2: Poke a little hole and inhale the helium.");
                        printf("3: Grab them and fly away.\n");
						scanf("%d",&choice);

                        if(choice == 1)
                        {
                            puts("\nCongratulations you made a kid cry.");
							puts("The kids cry is so loud that you begin to hear steps getting closer and closer. You look to your right and see the kids angry father coming your way.");
							puts("The father threatens to beat you up for making his kid cry.");
							printf("He says, \"Since you like popping little kids balloons, lets play a little game %s.\"\n",name);
							puts("Do you accept(1) or take a beating(2)?");
							scanf("%d",&choice);
							if(choice == 1)
							{
								printf("Past the light, where it stops shinning, are 3 balloons: (1)Blue, (2)Green, and (3)Orange. \nThey're there, you just can't see them.\n");
								printf("The rules are simple: Throw a dart at the balloons and guess the color of the balloon that you popped.\n");
								printf("How many times would you like to play?\n");
								scanf("%d",&x);
								
								for(int i = 0; i < x; i++)
								{
									printf("What's your guess: ");
									scanf("%d",&guess);
									balloon = (rand() % 3) + 1;
									
									if(guess == balloon)
									{
										puts("You guessed correctly!\n");
										good++;
									}
									if(guess != balloon)
									{
										puts("You guessed incorrectly!\n");
										bad++;
									}
									if((guess < 1) || (guess > 3))
									{
										puts("Choose (1)Blue, (2)Green, or (3)Orange");
										puts("This counts as a bad guess\n");
										bad++;
									}
					
								}
								
								if(good == 1 && (bad > 1 || bad == 0))
								{
									printf("\nFor getting %d guess correct you get %d balloon.\n",good, good);
									printf("For getting %d guesses wrong the kid, who you made cry, is going to throw %d darts at you.\n\n",bad, bad);
								}
								else if(bad == 1 && (good > 1 || bad == 1))
								{
									printf("\nFor getting %d guesses correct you get %d balloons.\n",good, good);
									printf("For getting %d guess wrong the kid, who you made cry, is going to throw %d dart at you.\n\n",bad, bad);
								}
								else if((bad == 1) && (good == 1))
								{
									printf("\nFor getting %d guess correct you get %d balloon.\n",good, good);
									printf("For getting %d guess wrong, the kid who you made cry, is going to throw %d dart at you.\n\n",bad, bad);
								}
								else
								{
									printf("\nFor getting %d guesses correct you get %d balloons.\n",good, good);
									printf("For getting %d guesses wrong the kid, who you made cry, is going to throw %d darts at you.\n\n",bad, bad);
								}
								printf("Every dart that the kid throws at you makes him feel better.\n");
								puts("The fathers says \"Thanks for making my kid feel better. Taking that door will get you out of here. \" ");
								printf("\nYou open the door. Now you have to options: Go away and never come back(1) or go (2)...\n");
								scanf("%d",&choice);
								if(choice == 1)
								{
									puts("Goodbye!");
									exit(EXIT_SUCCESS);
								}
								if(choice == 2)
								{
									continue;
								}
						
							}									
							
							if(choice == 2)
							{
								printf("Congralutions! You have chosen a beating of a life time. The kids father proceeds to toss you back and forth like a dirty rag.\n");
								printf("Thanks to you the little kids has learned a valuable lesson: Don't pop a kids balloons if his/her father is around."
										"\nThe beating was so good and therapeutic that it kicked you out of here. \nGoodbye %s!\n",name);
								exit(EXIT_SUCCESS);
							}
							
                        }

                        if(choice == 2)
                        {
                            puts("\nYou inhaled the helium and now you sound funny.");
							
							fp = fopen("NumberCount.txt","a");
							puts("The helium you inhaled made you forget how to count.");
							puts("You don't know why but for some reason you really want to count to X numbers.");
							puts("You find a book that shows you the numbers. How high do you want to count to? ");
							scanf("%d",&choice);
							puts("Do you want (1)odd count, (2)even count, or (3)regular count.");
							scanf("%d",&typeCount);
							
							if(typeCount == 1)
							{
								printf("Odd Count: \n");
								fprintf(fp,"Even Count: \n");
							}
							if(typeCount == 2)
							{
								printf("Even Count: \n");
								fprintf(fp,"Odd Count: \n");
							}
							if(typeCount == 3)
							{
								printf("Regular Count: \n");
								fprintf(fp,"Regular Count: \n");
							}
							
							for(int i = 0; i < choice; i++)
							{
								if(typeCount == 3)
								{
									printf("%d\n",i+1);
									fprintf(fp,"%d\n",i+1);
									
								}
								if(typeCount == 2)
								{
									if(i % 2 == 1)
									{
										printf("%d\n",i+1);
										fprintf(fp,"%d\n",i+1);
										
									}
								}
								if(typeCount == 1) 	 
								{
									if(i % 2 == 0)
									{
										printf("%d\n",i+1);
										fprintf(fp,"%d\n",i+1);
									}
								}								
							}
							
							fprintf(fp,"\n");
							fclose(fp);
							
							printf("In case you forget again, you can always use \"NumberCount.txt\" file as a reference.\n");
							
							puts("Are you done? Y/N ");
							scanf(" %c",&answer);
							
							if(answer == 'Y' || answer == 'y')
							{
								exit(EXIT_SUCCESS);
							}
							else
							{								
								continue;
							}	
                        }

                        if(choice == 3)
                        {
                            puts("\nYou need a lot more balloons to fly.");
							break;
                        }
						if(choice == 99)
						{
							printf("A hidden compartment opens under you and sends you back to the real world.\n");
							printf("Goodbye %s!\n",name);
							exit(EXIT_SUCCESS);
						}                 
                    }
					break;
                }

            case 11: 
                    {
                        while(choice != 99)
                        {
                            puts("\n Welcome to room 11");
                            puts("The door is locked, you are now in a maze ");
                            puts("you keep walking though the maze searching your way out");
                            puts("The light suddenly goes off and you dont know what to do.");
                            puts("you can see a small beam of light far away in the maze");
                            puts("you work your way as quick as you can to get to that light.");
                            puts("on your way there you see words written on the wall of each section of the maze on your way");
                            puts("the words you see so far are (shall, course, must, pass, he, be, in, the, enrolled, who, course");//who he shall pass must be enrolled in the course "course number"
                            puts("you wonder what the words you saw on your way to the light means?");
                            puts("Finally you made it to the light beam and find a big door your so excited to finally leave this maze with all its words and none sense"); 
                            puts("you approach to open the door but the door seems to be locked.");
                            puts("on the wall next to door there is a 3 digit pin pad");
                            puts("you must guess the pin in order to escape the maze and gain back your freedom!");
                            int i;    
                            FILE *inptr;
                            for(i = 1; i<4; i++)
                            {
                                scanf("%d", &pin);
                                if(pin != 251)
                                {
                                    printf("\nYou guessed wrong. Attempt %d failed.\n", i);
                                    if(i == 3)
                                    {
                                        inptr = fopen("failed.txt", "w");
                                        fprintf(inptr, "sorry you reached maximum attempts your locked in for life");
                                        fclose(inptr);
                                        puts("\n You reached maximum tries you lost.");
                                        
                                        pin = 99; 
                                        break;
                                    }
                                    
                                }
                                else if(pin == 251)
                                {
                                    puts("\n door unlocked.");
                                    
                                    puts("You are so happy you finally escaped this maze");
                                    puts("all of a sudden the door shuts behind you and a steel cage with blades keep rolling down on you from the ceiling");
                                    puts("you find some dice and a not next to it");
                                    puts("the note says ( Welcome to death trap you have 5 chances to guess if you fail the cage drops and kills you!");
                                    srand(time(NULL));
                                    int x;    
                                    int guess;    
                                    puts("you may begin guessing");
                                    for(i = 1; i < 6; i++)
                                    {
                                        scanf("%d", &guess);
                                        x = 1 + (rand()%6);
                                        printf("You guessed  %d. You rolled  %d.\n", guess, x);
                                        
                                        if(guess != x)
                                        {
                                            printf("\nYou guessed wrong. guess %d failed.\n", i);
                                            if(i == 5)
                                            {
                                                inptr = fopen("failedAgain.txt", "w");
                                                fprintf(inptr, "if your reading this message you must be dead already :( ");
                                                fclose(inptr);
                                                puts("You lose see you in hell ");
                                                pin = 99; 
                                            }
                                        }
                                        else if(guess == x)
                                        {
                                            char answer[100] = {0};
                                            puts("you must be feeling lucky today you guessed right");
                                            puts("A new door appears and is unlocked you walk out of the room");
                                            puts("you find yourself inside another room with bright lights");
                                            puts("you find a chest with letter combination lock on it");
                                            puts("there is questions engraved on the chest that appears to be the key to unlock it");
                                            puts("first question is (WHO TAUGHT YOU THIS LANGUAGE");
                                            scanf("%s", answer);
                                            if(strcmp(answer, "poppe") == 0 || strcmp(answer, "POPPE") == 0)
                                            {
                                               
                                                        inptr = fopen("SUCCESS.txt", "w");
                                                        fprintf(inptr, "you are now free!.");
                                                        fclose(inptr);
                                                        puts("the chest is unlocked.");
                                                        puts("a bright light hits you once you open the chest");
                                                        puts("you wake up and realize this was all just a dream ;) ");
                                                        pin = 99;     
                                                        break;
                                                        exit(EXIT_SUCCESS);
                                                    }
                                            
                                            
                                                    else
                                                    {
                                                        inptr = fopen("Fail3.txt", "w");
                                                        fprintf(inptr, "you lost chest is locked forever.");
                                                        fclose(inptr);
                                                        puts("Chest locked forever");
                                                        pin = 99; 
                                                    }
                                                }
                                               
                                            
                                            break;
                                        }
                                    exit(EXIT_SUCCESS);
                                }
                            }
                        }
}

            case 12:	//room 12 overhall complete
		{
				puts("you open the door and find a machine that proceeds to teleport you to a distant facility");
				int hp = 20, enemyhp = 20, dam = 0, enDam = 0;
				int w, b[3] = { 0,0,0 };		//enemy weakness and boolean for completion
				FILE *fptr;
				int *p = b;
				if (fptr = fopen("data.txt", "r+"))
				{
					puts("Your save file has been loaded.");
					fscanf(fptr, "%d %d %d", &b[0], &b[1], &b[2]);
				}
				else
				{
					fptr = fopen("data.txt", "w+");
					puts("A new save file will be created.");
					fprintf(fptr, "%d %d %d", b[0], b[1], b[2]);
				}
				while (choice != 99)
				{

					printf("Soldier: We're glad you made it back, captain %s! What are your orders?\n(Enter -1 to train, 0 to save your progress, or enter 1-3 to play through a particular chapter of this game.)\n", name);
					if ((*(p + 0) + *(p + 1) + *(p + 2)) == 3)
					{
						puts("After completing every chapter you unlocked a bonus scene.(Enter 4 to view it)");
					}
					scanf("%d", &choice);
					if (choice == -1)
					{
						puts("This is just a combat tutorial against a dummy.\nStart by entering 1(to use a gun), 2(to use a sword), or 3(to cast 1 of 4 spells).");
						puts("Guns and swords will do a fixed amount of damage while spells vary.");
						puts("Fire does a fixed amount, thunder does double of fire's amount but has a 50% chance of failing, heal does 0 damage but you heal 10 hp (max of 20 hp), and reflect sends back enemy damage while taking half of the damage.");
						puts("Enemies have a weakness to certain weapons or spells so try to find them to deal more damage to the enemy.");
						puts("When casting a spell, cast it calmly or else you'll lose focus. (lower case letters)");

						enemyhp = 20; w = 3; hp = 20;
						while (choice != 99 && enemyhp > 0)
						{
							printf("You have %d hp and the enemy has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, 99:return to facility or else:nothing)\n", hp, enemyhp);
							scanf("%d", &choice);
							if (choice>0 && choice<4)
							{
								dam = ((choice == 3) ? room12Spells(&hp, 1) : 4) * ((choice == w) ? 2 : 1);
							}
							else
							{
								dam = 0;
							}
							enemyhp -= dam;
							if (enemyhp <= 0)
							{
								break;
							}
							enDam = 1;
							if (dam % 2 == 1 || (int)(dam / 2.0 + .5) % 2 == 1)		//checks for reflect spell
							{
								enDam /= 2;
							}
							hp -= enDam;
							printf("You dealt %d damage and the enemy dealt %d damage.\n", dam, enDam);
						}
						if (hp <= 0 && enemyhp>0 && choice != 99)
						{
							puts("You lost you will now be sent to the facility.");
						}
						if (hp > 0 && enemyhp <= 0 && choice != 99)
						{
							puts("Congratulations you won, you will now be sent to the facility.");
						}
						if (choice == 99)
						{
							puts("Returning to the facility.");
						}
						choice = -2;
					}
					else if (choice == 0)
					{
						rewind(fptr);
						fprintf(fptr, "%d %d %d", b[0], b[1], b[2]);
						puts("Your progress has been saved, you will now return to the facility.");
						printf("So far chapter 1 is%scomplete, chapter 2 is%scomplete, and chapter 3 is%scomplete.", (b[0]) ? " " : " in", (b[1]) ? " " : " in", (b[2]) ? " " : " in");
						choice = -2;
					}
					else if (choice == 1)
					{
						puts("Chapter 1: Fall of a Republic");
						puts("Once the new chancellor was elected he implemented new laws throughout the galaxy.");
						puts("The laws strengthened the military, but rather than being used to protect the Milky Way Republic from the Andromeda Empire it was used to keep the people in line.");
						puts("Former military, local militias, and people fleeing the laws from the center of the galaxy formed a rebellion force around the edges of the Milky Way.");
						puts("We managed to deceive the enemy into sending their main force to our \"secret base\" now we sent our force for an all out attack towards the center.");
						printf("Here we are, facing the force stationed at the capital... - %s - January 24, 3018\n", name);
						enemyhp = 20; w = 2; hp = 20;
						while (choice != 99 && enemyhp > 0 && hp > 0)
						{
							printf("You have %d hp and the enemy has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, 99:return to facility or else:nothing)\n", hp, enemyhp);
							scanf("%d", &choice);
							if (choice>0 && choice<4)
							{
								dam = ((choice == 3) ? room12Spells(&hp, 5) : 4) * ((choice == w) ? 2 : 1);
							}
							else
							{
								dam = 0;
							}
							enemyhp -= dam;
							if (enemyhp <= 0)
							{
								break;
							}
							enDam = 5;
							if (dam % 2 == 1 || (int)(dam / 2.0 + .5) % 2 == 1)		//checks for reflect spell
							{
								enDam /= 2;
							}
							hp -= enDam;
							printf("You dealt %d damage and the enemy dealt %d damage.\n", dam, enDam);
						}
						b[0] = (hp>0 && enemyhp<1) ? 1 : b[0];
						if (hp <= 0 && enemyhp>0 && choice != 99)
						{
							puts("You lost you will now be sent to the facility.");
						}
						if (hp > 0 && enemyhp <= 0 && choice != 99)
						{
							puts("Congratulations you won, you will now be sent to the facility.");
						}
						if (choice == 99)
						{
							puts("Returning to the facility.");
						}
						choice = -2;
					}
					else if (choice == 2)
					{
						puts("Chapter 2: Life in the Center");
						puts("The chancellor promised everyone jobs once elected and he delivered on his promise... in the most horrible way possible.");
						puts("Plenty of people were rounded up and experimented on with various chemical substances.");
						puts("The chancellor's goal was to make a mindless population that will obey any order given to them by him directly.");
						puts("Many people never survived the experiments because the drug made unnatural changes to the human brain.");
						puts("Those that survived suffer from symptoms such as rotting flesh and fits of rage, some even resort to cannabalism. Rumors suggest it's to ease their pain.");
						printf("Here we are, facing the citizins attempting to put them out of their misery... - %s - February 1, 3018\n", name);
						enemyhp = 30; w = 1; hp = 20;
						while (choice != 99 && enemyhp > 0 && hp > 0)
						{
							printf("You have %d hp and the enemy has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, 99:return to facility or else:nothing)\n", hp, enemyhp);
							scanf("%d", &choice);
							if (choice>0 && choice<4)
							{
								dam = ((choice == 3) ? room12Spells(&hp, 3) : 4) * ((choice == w) ? 2 : 1);
							}
							else
							{
								dam = 0;
							}
							enemyhp -= dam;
							if (enemyhp <= 0)
							{
								break;
							}
							enDam = 3;
							if (dam % 2 == 1 || (int)(dam / 2.0 + .5) % 2 == 1)		//checks for reflect spell
							{
								enDam /= 2;
							}
							hp -= enDam;
							printf("You dealt %d damage and the enemy dealt %d damage.\n", dam, enDam);
						}
						b[1] = (hp>0 && enemyhp<1) ? 1 : b[1];
						if (hp <= 0 && enemyhp>0 && choice != 99)
						{
							puts("You lost you will now be sent to the facility.");
						}
						if (hp > 0 && enemyhp <= 0 && choice != 99)
						{
							puts("Congratulations you won, you will now be sent to the facility.");
						}
						if (choice == 99)
						{
							puts("Returning to the facility.");
						}
						choice = -2;
					}
					else if (choice == 3)
					{
						puts("Chapter 3: End of the Milky Way Government");
						puts("The chancellor is now confronting us directly along with his corrupt officials.");
						puts("People believe the restricting of magic to the general population helped the chancellor rise to power.");
						puts("Other corrupt officials proceeded to use spells to manipulate the population and due to a lack of knowledge on magic nobody could counter their charm spells.");
						puts("This will be our most difficult fight and we must finish this quickly before the main force returns to the capital.");
						puts("If the rumors hold true then the chancellor has a powerful ability that could destroy armies, there must be a way to counter it.");
						printf("This is it, our last stand and the stakes can't be any higher - %s - February 3, 3018\n", name);
						enemyhp = 40; w = 0; hp = 20;
						int timeStop = 1, reflectDial = 1;
						while (choice != 99 && enemyhp > 0 && hp > 0)
						{
							printf("You have %d hp and the enemy has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, 99:return to facility or else:nothing)\n", hp, enemyhp);
							scanf("%d", &choice);
							if (choice>0 && choice<4)
							{
								dam = ((choice == 3) ? room12Spells(&hp, 7) : 4) * ((choice == w) ? 2 : 1);
							}
							else
							{
								dam = 0;
							}
							if (dam % 2 == 0 && (int)(dam / 2.0 + .5) % 2 == 0)		//checks for reflect spell
							{
								dam = 0;		//time warp makes every attack fail except reflect and heal
								if (timeStop)
								{
									puts("Your attempts are useless with my time warping spell!");
									timeStop = 0;
								}
							}
							enemyhp -= dam;
							if (enemyhp <= 0)
							{
								break;
							}
							enDam = 7;
							if (dam % 2 == 1 || (int)(dam / 2.0 + .5) % 2 == 1)		//checks for reflect spell
							{
								enDam /= 2;
							}
							hp -= enDam;
							printf("You dealt %d damage and the enemy dealt %d damage.\n", dam, enDam);
							if (reflectDial && dam == 7)
							{
								puts("Impossible your skills resemble ");
								reflectDial = 0;
							}
						}
						b[2] = (hp>0 && enemyhp<1) ? 1 : b[2];
						if (hp <= 0 && enemyhp>0 && choice != 99)
						{
							puts("You lost you will now be sent to the facility.");
						}
						if (hp > 0 && enemyhp <= 0 && choice != 99)
						{
							puts("Congratulations you won, you will now be sent to the facility.");
						}
						if (choice == 99)
						{
							puts("Returning to the facility.");
						}
						choice = -2;
					}
					else if (choice == 4 && (*(p + 0) + *(p + 1) + *(p + 2)) == 3)
					{
						puts("Chapter 4: Return of the Republic");
						puts("After the final battle everyone celebrated our victory it became a holiday.");
						puts("The Milky Way was at peace for a time but then the Andromeda Empire invaded.");
						puts("We discovered that the chancellor was a puppet of the Andromeda Emperor.");
						puts("What the chancellor said scared me apparently the emperor and I share similar abilities.");
						printf("Looks like the final confrontation with the emperor and his army will determine the fate of the Milky Way.... - %s - April 27, 3058\n", name);
						enemyhp = 50; w = 0; hp = 20;
						while (choice != 99 && enemyhp > 0 && hp > 0)
						{
							printf("You have %d hp and the enemy has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, 99:return to facility or else:nothing)\n", hp, enemyhp);
							scanf("%d", &choice);
							if (choice>0 && choice<4)
							{
								dam = ((choice == 3) ? room12Spells(&hp, 7) : 4) * ((choice == w) ? 2 : 1);
							}
							else
							{
								dam = 0;
							}
							enemyhp -= (dam <= 7) ? dam : dam / 2;
							if (enemyhp <= 0)
							{
								break;
							}
							enDam = (dam < 7) ? 7 : dam;
							if (dam % 2 == 1 || (int)(dam / 2.0 + .5) % 2 == 1)		//checks for reflect spell
							{
								enDam /= 2;
							}
							hp -= enDam;
							printf("You dealt %d damage and the enemy dealt %d damage.\n", (dam <= 7) ? dam : dam / 2, enDam);
						}
						if (hp <= 0 && choice != 99 && enemyhp>0)	//bad end
						{
							printf("The Milky Way has fallen I fear everyone will become slaves for Andromeda.\nI have not seen the outside world in days after being imprisoned.\nNow I await for my execution in an hour on charges of war crimes.... %s - May 8, 3058\n", name);
						}
						if (hp > 0 && choice != 99 && enemyhp <= 0)		//good end
						{
							puts("Impossible, is this why my right hand man lost to you!? You share my ability!");
							puts("No my empire will fall without me, my right hand man may have been cruel but promise me you won't torment my people.\n He held a grudge after the Milky Way attacked us a century ago we didn't want any repeats so we decided to take over.\nHis methods were cruel but I never intended to harm the inhabitants of the Milky Way....");
							puts("Those were the emperor's final words. It's finally over!\nAfter the fall of the Andromeda Empire the Milky Way took over.\nWe implemented laws to benefit the Andromeda people while being unintrusive to their way of life.");
							printf("There were many orpahns so I took in a few including the former chancellor's and emperor's kids.\nNow we have entered a true era of peace and may it last forever, here I am at a ripe age of 100 awaiting rest..... %s - May 9, 3092\n", name);
							printf("And thus the final entry in the journal of captain %s comes to an end. You will now return to the facility.\n", name);
						}
						if (choice == 99)
						{
							puts("Returning to the facility.");
						}
						choice = -2;
					}
				}
				fclose(fptr);
			break;
		}
            case 13:
            {
                
                #define RED(string)     "\x1b[31m" string "\x1b[0m"
                #define GREEN(string)    "\x1b[32m" string "\x1b[0m"
                #define YELLOW(string)  "\x1b[33m" string "\x1b[0m"
                #define BLUE(string)     "\x1b[34m" string "\x1b[0m"
                #define MAGENTA(string)  "\x1b[35m" string "\x1b[0m"
                #define CYAN(string)     "\x1b[36m" string "\x1b[0m"
                
                //Variables
                char str[20];
                int count;
                int select;
                int option;
                
                while(choice != 99)
                {
                    
                    //Story
                    puts("");
                    puts("" BLUE("You open the door and find a time traveling car. You're excited to drive the traveling car. You get in the car and start thinking of all the places in time you could visit. The car asks you...")"");
                    
                    //Question
                    puts("");
                    puts(""CYAN("WHAT TIME AND PLACE WOULD YOU LIKE TO TRAVEL?")"");
                    scanf("%s",str);
                    puts("\n");
                    
                    
                    puts("" YELLOW("EEEEEE      X     X    CCCCCCC     EEEEEE     L          L          EEEEEE    N      N    TTTTTTTTTTT   ")"");
                    puts("" YELLOW("E            X   X     C           E          L          L          E         N N    N         T        ")"");
                    puts("" YELLOW("E             X X      C           E          L          L          E         N  N   N         T        ")"");
                    puts("" YELLOW("EEEEE          X       C           EEEEE      L          L          EEEEE     N   N  N         T        ")"");
                    puts("" YELLOW("E             X X      C           E          L          L          E         N    N N         T        ")"");
                    puts("" YELLOW("E            X   X     C           E          L          L          E         N     NN         T        ")"");
                    puts("" YELLOW("EEEEEE      X     X    CCCCCCC     EEEEEE     LLLLLLL    LLLLLLL    EEEEEE    N      N         T        ")"");
                    
                    puts("\n");
                    puts("YOU WILL BE TRAVELING TO ");
                    printf("%c\t",uppercase(str));
                    //puts("");
                    
                    //Story
                    puts(""BLUE("\nYou look at your watch and the hands are turning backwards. You look around and see the wormhole around you. Everything is moving so fast! The time traveling car is trembling and now you are starting to feel really dizzy. You want it to stop but it continues to move faster. You reach out to press the red button in front of you. Suddenly...")"");
                    puts("");
                    sleep(7);
                    
                    //Warning
                    warning(count);
                    
                    //Sleep timer
                    sleep(1);
                    
                    //Story
                    puts(""BLUE("\nYou have fainted. You wake up you see a blurry light. You're trying to read what is says but your vision is still a little blurry")"");
                    
                    //Prints
                    puts("\n");
                    puts(""GREEN("\nY_____________________________________________________________O___________________U")"");
                    
                    //sleep timer
                    sleep(1);
                    //Prints
                    puts(""GREEN("\nH_______________________________________________________________A__________________________________V____________E")"");
                    
                    //sleep timer
                    sleep(1);
                    
                    puts(""GREEN("\nA_____________R________R____________________________________________________I_________________________________V___________________E_________________________D")"");
                    
                    //sleep timer
                    sleep(1);
                    
                    puts(""GREEN("\nT________________O Y____________O_______________U____________R")"");
                    
                    //sleep timer
                    sleep(1);
                    puts(""GREEN("\nD_____________E_________________________________S__________T_________________I______________________________N______________AT____ION")"");
                    
                    //Story
                    puts(""BLUE("\nYou wipe your eyes getting closer to the screen to read what it says...")"");
                    //sleep timer
                    sleep(3);
                    
                    puts(""GREEN("\nYOU HAVE ARRIVED TO YOUR DESTINATION")"");
                    
                    //Sleep
                    sleep(1);
                    
                    
                    //Story
                    puts(""BLUE("\nYou look out the window but you do not know where you have landed. You look out and you see a lot of trees and the foggy sky. You try turning on the time traveling car but the car is damaged and out of battery. You get out of the time traveling car and decide to wander around the forest. As you walk through the forest, you hear a sound. You do not know where it's coming from but then you hear it again. You want to know what it is so you follow the sound. You walk through the brushes. You ask yourself 'IS THAT REALLY WHAT I THINK IT IS. I HAVE TO HURRY!' You get closer and closer to the sound. I KNEW IT! IT'S A TRAIN! You search around but don't see anyone.Suddenly,the train starts to move...")"");
                    puts("\n\n");
                    
                    
                    //Question
                    
                    fseek(stdin,0,SEEK_END);
                    puts(YELLOW("What should you do?")"");
                    puts(YELLOW("Select (1) to proceed")"");
                    scanf("%d",&choice);
                    
                    
                    if(choice == 1)
                    {
                        fseek(stdin,0,SEEK_END);
                        puts(""YELLOW("(1) Get on the moving train?\t\t\t\tSELECT: (1)")"");
                        puts(""YELLOW("(2) Continue walking and search for a road?\t\tSELECT: (2)")"");
                        puts(""YELLOW("(3) Walk back to the time traveling car?\t\tSELECT: (3)")"");
                        scanf("%d",&choice);
                        
                        
                        
                        option = choice;
                        
                        if(option == 1)
                        {
                            //OPTION 1 CODE
                            char letter;
                            puts(""BLUE("You must hurry because the train is leaving. You begin to chase after the train and quickly jump on train. The train is smelly but its too late to get off because the train is now moving fast. So you have no other choice but to stay on the train until it arrives to its destination... You do not know what time it is but see the sky getting dark. You'll have to spend the night in the train.")"");
                            puts(""BLUE("You have fallen asleep and you are now waking up the train is arriving to its destintation. Should you get off right way or wait a little while?")"");
                            
                            fseek(stdin,0,SEEK_END);
                            puts(""YELLOW("Get off right away!\tSelect a:")"");
                            puts(""YELLOW("Wait a little while!\tSeleect b:")"");
                            scanf(" %c",&letter);
                            
                            
                            if(letter =='a' || letter =='A')
                            {
                                puts(""BLUE("You have get off the train right away. Some men in uniforms begin to shoot at you. You begin to run away and run into the woods and quicly hide behide a big log. Suddenly you hear a man say..")"");
                                puts("\n\n");
                                puts("NETTER VERSUCH");
                                puts("\n\n");
                                puts(""BLUE("He pulls the trigger.")"");
                                puts(""RED("You were shot. Game over.")"");
                                puts(""RED("Try again. You will be taken back to the time traveling car.\n")"");
                                
                            }
                            
                            if(letter =='b' || letter =='B')
                            {
                                puts(""BLUE("You have decided to wait for a while. You hear voices and quickly hide.... You stay on the train just to be safe. You finally get off the train. You see a village up ahead and begin to walk. As you arrive to the village you look up and see a sign that says  ")"");
                                puts("\n\n");
                                puts("AREBEIT MACHT FREI");
                                puts("\n\n");
                                
                                fseek(stdin,0,SEEK_END);
                                puts(""YELLOW("(1)Enter the village?\t\tSELECT: (1)")"");
                                puts(""YELLOW("(2)Walk back into the forest?\t\t\tSELECT: (2)")"");
                                scanf("%d",&choice);
                                
                                
                                if(option!=1)
                                {
                                    puts(""BLUE("You walk back into the woods but you do not know where to go. You have now been walking for several hours. You're lost. Its getting dark and you are also getting really cold. You cant feel your feet or hands. You will have to spend the night in the woods.")"");
                                    puts(""BLUE("You lay down on top of a big log and fall asleep.")"");
                                    puts(""RED("You feel asleep and never woke up. You froze to death. Game over.")"");
                                    puts(""RED("Try again. You will be taken back to the time traveling car.\n")"");
                                    
                                }
                                
                                option = choice;
                                
                                if(option  == 1)
                                {
                                    char letter;
                                    
                                    puts(""BLUE("It's starting to get dark. You must hurry and find a place to spend the night.  You enter the village and see several buildings. Should you spend the night in the building on your left or the building on your right?")"");
                                    
                                    fseek(stdin,0,SEEK_END);
                                    puts(""YELLOW("(a) Right!\t\t\t\tSELECT: (a)")"");
                                    puts(""YELLOW("(b) Left!\t\tSELECT: (b)")"");
                                    scanf(" %c",&letter);
                                    
                                    
                                    
                                    if(letter =='a' || letter =='A')
                                    {
                                        puts(""BLUE("You decided to enter the building on your right. You open the door and it is very dark but found a place to lay down.")"");
                                        puts(""BLUE("Suddenly you wake up with a whistle and the door opens. Many people begin to fill up the room. You ask someone...")"");
                                        puts("\n\n");
                                        puts("WHAT'S HAPPENING");
                                        puts("\n\n");
                                        puts(""BLUE("But the person responses in a language you do not understand")"");
                                        puts(""BLUE("You have no clue what is going on but see everyone taking off their clothes")"");
                                        puts(""BLUE("Suddenly smoke begins to fill up the room.")"");
                                        puts(""RED("You were in a gas chamber and have been poisoned. Game over.")"");
                                        puts(""RED("Try again. You will be taken back to the time traveling car.\n")"");
                                        
                                    }
                                    
                                    if(letter =='b' || letter =='B')
                                    {
                                        puts(""BLUE("You have decided to enter the building on your left. You open the door and suddenly see several people dressed in stripped clothing")"");
                                        puts(""BLUE("You decide to ask...")"");
                                        puts("\n\n");
                                        puts("COULD I SPEND THE NIGHT HERE? IM LOST AND I DO NOT THIS AREA.");
                                        puts("\n\n");
                                        puts(""BLUE("Then one person responses saying...")"");
                                        puts("YOU SHOULDN'T BE HERE! THEY HATE US ALL!");
                                        puts("\n\n");
                                        puts(""BLUE("The next morning a person in a uniform enters the room and yells out...")"");
                                        puts("WEIB JEMAND HIER,WIE MAN MATHE MACHT?");
                                        puts("\n\n");
                                        puts(""BLUE("Your friend translates for you that the person asked does someone here knows how to do math?. You quickly raise your hand.The person in the uniform approaches you and gives you a math problem to solve.")"");
                                        puts(""BLUE("But first says...")"");
                                        puts("\n\n");
                                        puts("ZUNACHST MUSSEN SIE JEDOCH WINE ZAHL ZWISCHEN 1 UND 10 AUSWAHLEN!(But first you must choose a number from 1 - 10)");
                                        puts("\n\n");
                                        
                                        
                                                    
                                        
    
                                        
                                        
                                    }
                                    break;
                                    
                                }
                            }
                        }
                        
                    }
                    else if(option == 2)
                    {
                        //OPTION 2 CODE
                        char letter;
                        puts(""BLUE("You have decided to continue walking and search for a road. As you continue walking you hear a motorcycle. The motorcycle is lonely. There is no one around. Should you take it?")"");
                        
                        fseek(stdin,0,SEEK_END);
                        puts(""YELLOW("Yes!\tSelect a:"));
                        puts(""YELLOW("No!\tSeleect b:"));
                        scanf(" %c",&letter);
                        
                        
                        if(letter =='a' || letter =='A')
                        {
                            puts(""BLUE("You quickly get on the motorcycle and start taking off. This is your first time driving a motorcycle. You press the acceleration to go faster. Then all of a sudden...")"");
                            puts(""RED("You lose control and crash. Game over.")"");
                            puts(""RED("Try again. You will be taken back to the time traveling car.\n")"");
                            
                        }
                        
                        if(letter =='b' || letter =='B')
                        {
                            puts(""BLUE("You have decided not to get on the motorcycle because you do not know how to drive. So you continue to walk along the side of the rode. As you continue to walk you hear something in the bushes you can not see what it is. You begin to walk faster but then you hear the noise again. You start to panic and begin to run. You're running and looking back to see if something is chasing you. Then all of a sudden...")"");
                            puts(""RED("You trip and hit your head against a big rock. Game over.")"");
                            puts(""RED("Try again. You will be taken back to the time traveling car.\n")"");
                            
                        }
                        
                    }
                    else if(option == 3)
                    {
                        //OPTION 3 CODE
                        char letter;
                        puts(""BLUE("You have decided to walk back and follow your shoe tracks. As you continue walking in the snow you begin to realize that the shoe tracks you were following were not your shoe tracks. Should you continue to follow the shoe tracks?")"");
                        
                        fseek(stdin,0,SEEK_END);
                        puts(""YELLOW("Yes!\tSelect a:"));
                        puts(""YELLOW("No!\tSeleect b:"));
                        scanf(" %c",&letter);
                        
                        
                        if(letter =='a' || letter =='A')
                        {
                            puts(""BLUE("You have continued to follow the shoe tracks and begin to hear voices. You still do not know who it is or understand what they are saying. You yell out.")"");
                            puts("HELLO? IS ANYONE THERE?");
                            puts(""BLUE("Suddenly, you feel a gun behind your head and someone saying..")"");
                            puts("NETTER VERSUCH");
                            puts("\n\n");
                            puts(""BLUE("He pulls the trigger.")"");
                            puts(""RED("You were shot. Game over.")"");
                            puts(""BLUE("Try again. You will be taken back to the time traveling car.\n")"");
                        }
                        
                        if(letter =='b' || letter =='B')
                        {
                            puts(""BLUE("You have decided to go back to find the time traveling car.You have now been walking for several hours. You're lost and do not know where to go. Its getting dark and you are also getting really cold. You cant feel your feet or hands. You will have to spend the night in the woods.")"");
                            puts(""RED("You lay down on top of a big log and fall asleep.")"");
                            puts(""RED("You feel asleep and never woke up. You froze to death. Game over.")"");
                            puts(""RED("Try again. You will be taken back to the time traveling car.\n")"");
                        }
                        
                        
                    }
                    else if(choice == 99)
                    {
                        puts("You quit the Game");
                    }
                    else
                    {
                        puts("Wrong input type. Try Again");
                        break;
                    }
                }
                break;
            }

                    
            case 14:
                {
                    int num, i, j, winning;
		    char g[20];
		    FILE *wptr;
		    wptr = fopen("output.txt","w");
                    while(choice != 99)
                    {
                        puts("You enter and close the door behind you.");
			puts("Welcome to Case 14: The opportunity is great here to win some money");
			puts("Play smart and you will be a winner today");
                        puts("You see two doors one on your left and one on your right");
                        puts("There is also a tunnel straight ahead");
                        puts("You can either enter door 1 of 2 of go to the tunnel (choice 3)");
                        puts("What's your choice?");
                        scanf("%d",&choice);
                        switch(choice)
                        {
                            case 1:
                                puts("You enter and close the door behind you");
                                puts("You find a table straight ahead with a duffel bag on top");
                                puts("You can either open the bag (Option 1) or take $500 and leave (Option 2)");
                                puts("What do you choose?");
                                scanf("%d",&choice);
                                switch(choice)
                                {
                                    case 1:
                                        {
                                            puts("You have chosen to open the bag");
                                            puts("Enter a number of you desire");
					    scanf("%d",&num);
					    puts("Check the output file to see how much you have won!");
					    fprintf(wptr,"You have won $%d000000! Congrats!",num);
                                            break;
                                        }
                                    case 2:
                                        {
                                            puts("You have chosen to take the money");
                                            puts("Very smart since there was nothing in the bag");
                                            puts("You can now leave $500 richer, Have a good day");
                                            break;
                                        }
                                    default:
                                        break;
                                }
                                break;
                            case 2:
                                {
                                    puts("You have entered door 2");
                                    puts("Enter a string less than 20 characters");
				    puts("I will change your string to all uppercase letters");
				    getchar();
				    fgets(g, 20, stdin);
				    printUpper(g,20);
				    puts("Thank you for playing along. You don't win anything, should have chosen a different door :p");
                                    break;
                                }
                                break;
                            case 3:
                                {
                                    puts("You have now entered the tunnel");
                                    puts("Props for being a risk taker");
                                    puts("While the other doors you could have been a very rich man...");
                                    puts("You'll have a chance. You will be given one million dollars and you can bet on a number (1-5)");
                                    puts("You also have another option to not gamble and take $500,000 and leave");
                                    puts("You're a risk taker, but the option is up to you");
                                    puts("Enter 1 to gamble or enter 2 to leave with the money");
                                    scanf("%d",&choice);
                                    switch(choice)
                                    {
                                        case 1:
                                            puts("Enter the number you'd like to bet on:");
                                            puts("The number will be multiplied by a random multiplier and that will be the money you win");
                                            puts("Keep in mind it can be multiplied by 0");
                                            scanf("%d",&num);
                                            j = rand() %6;
                                            winning = (num*j) * 2000000;
                                            printf("You have won $%d, congratulations!\n",winning);
                                            break;
                                        case 2:
                                            puts("You took the easy way out");
                                            puts("But you're being rewarded for taking the risk entering the tunnel");
                                            puts("Have a good day!");
                                            break;
                                        default:
                                            break;

                                    }
                                    break;
                                }
                            default:
                                break;
                        }
                        break;
                    }
                    break;
                }
            case 15:
                {
                        while(choice != 99)
                        {
				int fire = 1, water = 2, grass = 3;
    				int i;
				int death = 1, win = 0;  
    				int playerScore = 0, enemyScore = 0;
    				int choice;
    				srand(time(NULL));
				puts("                888\n""                888\n""                888\n""88888b.  .d88b. 888  888 .d88b. 88888b.d88b.  .d88b. 88888b.\n""888 *88bd88**88b888 .88Pd8P  Y8b888 *888 *88bd88**88b888 *88b\n""888  888888  888888888K 88888888888  888  888888  888888  888\n""888 d88PY88..88P888 *88bY8b.    888  888  888Y88..88P888  888\n""88888P*  *Y88P* 888  888 *Y8888 888  888  888 *Y88P* 888  888\n""888\n""888              Welcome To Pokemone Battle Hell\n""888");
				//Sorry for annoying ASCII art.
				printf("\nCongratulations %s, you've escaped one watery hell only to emerge in a new hell.\n",name); 
				puts("*Confused* You look around wondering who is talking to you.");
				puts("Coming to your senses you recongnize the man before you.");
				puts("\nThe man is oddly remensicent of Proffesor Oak from a childhood favorite Pokemon game.");
				puts("The resemblence is uncanny, but equally as creepy like any cartoon live action film.");
				puts("Prof. Oak explains you have transcended time and space and the only way home is to win a battle.");
				puts("\nThe rules are elementary, you choose a pokemon in hopes its stronger. Best of three wins.");
				puts("To further explain the rules: Fire>Grass, Water>Fire, Grass>Water.");
				puts("He then asks you to choose your Pokemon.\n");        
    				printf("1. Charmander (Fire type)\n2. Squirtle (Water Type)\n3. Bulbasaur (Grass Type)\n");
				while(win != 1)
				{
					for(i=0;i<3;i++)
					{
						printf("\nChoose your pokemon: ");
						scanf("%d",&choice);
						int enemy = rand() % 3 + 1;
						if(choice == 1)
						{
							if(enemy == 1)
							{
								puts("Charmander vs Charmander"); 
								printf("Draw, neighter Charmanders flame will ever extinguish.\n");
							}
							if(enemy == 2)
							{
								puts("Charmander vs Squirtle"); 
								printf("Oak Wins! Squirtle soaks Charmanders tail.\n");
								enemyScore = enemyScore + 1;
							}
							if(enemy == 3)
							{
								puts("Charmander vs Bulbasaur"); 
								printf("%s Wins! Charmander set Bulbasaur ablaze!\n",name);
								playerScore = playerScore + 1;
							}
						}
						else  if(choice == 2)
						{
							if(enemy == 2)
							{	puts("Squirtle vs Squirtle"); 
								printf("Draw, the Squirtles ditch you and form the Squirtle squad.\n");
							}
							if(enemy == 3)
							{	
								puts("Squirtle vs Bulbasaur"); 
								printf("Oak Wins! Squirtles water gun had no effect on Bulbasaur .\n");
								enemyScore = enemyScore + 1;
							}
							if(enemy == 1)
							{	
								puts("Squirtle vs Charmander"); 
								printf("%s Wins! Squirtle extinguished Charmander\n",name);
								playerScore = playerScore + 1;
							}
						}
						else if(choice == 3)
						{
							if(enemy == 3)
							{
								puts("Bulbasaur vs Bulbasaur"); 
								printf("Draw, Both Bulbasaur beaming eachother got us nowhere.\n");
							}
							if(enemy == 2)
							{
								puts("Bulbasaur vs Squirtle"); 
								printf("%s Wins! All Squirtles watering nearly evolved our Bulbasaur.\n",name);
								playerScore = playerScore + 1;
							}
							if(enemy == 1)
							{
								puts("Bulbasaur vs Charmander"); 
								printf("Oak Wins! Bulbasaur was burned to a crisp by Charmander.\n");
								enemyScore = enemyScore + 1;
							}
						}
						else
						{
							printf("Please choose a pokemone\n");
						}
					}
					if(enemyScore > playerScore )
					{
						printf("Oak explains he beat you %d to %d...\n",enemyScore,playerScore);
						puts("In a sudden flash you black out only to be awoken again.");
						puts("You wake up to an alarm turning over to 6:00am and you hear I Got You Babe playing."); 
						puts("You again are standing face to face with oak. You are trapped here until you win.");
						printf("You realize this is the %d time you've lost and died... You must leave this place.",death);   
						playerScore = 0; 
						enemyScore = 0; 
						death = death + 1; 
					}
					else if(enemyScore < playerScore )
					{
						printf("%s, You've bested me %d to %d. It's time you return home.\n",name,playerScore,enemyScore);
						puts("He steps aside revealing another door similar to the one that brought you here.");
 						puts("Do you dare open it?..."); 
						puts("Find out next week on POKEMON!");
					}
					else if(enemyScore = playerScore )
					{
						printf("Oak explains no winner, and it's a draw!\n");
						puts("Explaining someone has to win the battle continues!"); 
					}
				} 
//    				return 0;			     
                        }
                        break;
                }
            case 16:
                {
                    while(choice != 99)
                    {
                    }
                    break;
                }
            case 17:
                {
                    int cor = 0;
			int *p;
			int chances = 3;
			int guess = 0;
			int choice = 0;
			int magicNum = rand()%16;
			int scaleWeight = rand()%50;
			int totWeight = 0;

			int correctSlots[2] = {magicNum, scaleWeight};

			p = correctSlots;


		    puts("You open the door and walk in to find");
		    puts("a dark room with a dim spotlight on a machine at the end of the room");
		    puts("The door locks behind you...");



		    printf("MN: %d\n", magicNum );
		    printf("SW: %d\n", scaleWeight );

		    while(choice != 99)
		    {

		            puts("1. Approach spotlight");
		            puts("2. Guess number");
		            puts("3. Balance Scale");
		            puts("4. Write down the answers");
		            puts("5. Check Answers");
		            puts("Enter 99 to quit");

		            scanf("%d",&choice);

		            switch(choice)
		            {
		                case 1:

		                    puts("There are 2 slots on the wall");
		                    puts("There is something written on the wall..");
		                    puts("ANSWER THE EACH QUESTION CORRECTLY AND BECOME CLOSER TO ESCAPING WITH YOUR LIFE!");
		                    puts("1. GUESS THE MAGIC NUMBER BETWEEN 0 - 16");
		                    puts("2. BALANCE THE SCALE");
		                    puts("ENTER YOUR ANSWERS IN THE MACHINE AND PRAY YOU ARE CORRECT...");


		                    break;
		                case 2:
		                    printf("You have %d chances", chances );
		                    puts("Enter your guess: ");
		                    scanf("%d",&guess);

		                    if(guess == magicNum)
		                    {
		                        puts("YOU ARE CLOSER");
		                    }

		                        if(guess > magicNum)
		                        {
		                            puts("Lower");
		                        }
		                        else if(guess < magicNum){
		                            puts("Higher");
		                        }

		                    break;
		                case 3:
		                        choice =0;

		                        while(choice != 3)
		                        {
		                            puts("1. Add rocks to scale");
		                            puts("2. Remove rocks from scale");
		                            puts("3. Done with scale");
		                            scanf("%d", &choice);

		                            switch(choice)
		                            {
		                                case 1:
		                                    puts("How many rocks to add: ");
		                                    scanf("%d", &guess);

		                                    totWeight += guess;

		                                    if(totWeight > scaleWeight)
		                                    {
		                                        puts("LESS WEIGHT");
		                                    }
		                                    else if(totWeight < scaleWeight)
		                                    {
		                                        puts("MORE WEIGHT");
		                                    }
		                                    else if(totWeight == scaleWeight)
		                                    {
		                                        puts("YOU ARE CLOSER!");
		                                    }


		                                    break;
		                                case 2:
		                                    puts("How many rocks to remove: ");
		                                    scanf("%d", &guess);
		                                    totWeight -= guess;

		                                    if(totWeight < 0)
		                                    {
		                                        puts("MORE WEIGHT");
		                                        totWeight = 0;
		                                    }
		                                    else if(totWeight > scaleWeight)
		                                    {
		                                        puts("LESS WEIGHT");
		                                    }
		                                    else if(totWeight == scaleWeight)
		                                    {
		                                        puts("YOU ARE CLOSER!");
		                                    }

		                                    break;

		                                default:
		                                    break;


		                            }

		                        }

		                    break;
		                case 4:
		                    writeAnswers();
		                    break;
		                case 5:
		                    cor = checkAnswers(p);

		                    if(cor == 2)
		                    {
		                        puts("YOU MAY LIVE");
		                    }
		                    else("You are INCORRCET...The walls begin to close in...RIP");
		                    break;
		                default :
		                         puts("The walls begin to close in...RIP");
		                    break;
		            }


		    }
                    break;
                }
            case 18: //Fernando Ochoa
                {
                    while(choice != 99)
                    {
                        FILE *inptr;
                        char ranstring[256];
			char entString[256];
			char *ptr = entString;
			int randints[10];
                        int uChoice,sides, numguess, randnum, i, k, numrolls, roll;
                        puts("You open the door and find ...... ");
                        puts("An s2000 that is currently fixed with airbag suspension");
                        puts("An s2000 completely modified with all authentic JDM parts");
                        puts("An that is just completely bone stock andlow miles, but is an AP1");
                        puts("But now you have 4 choices...");
                        puts("Choice 1: throw away the bagged s2000 but then the modified s2000 is reverted to OEM");
                        puts("Choice 2: throw away all of these cars and save your money for a worse car");
                        puts("Choice 3: Make these cars all bone stock");
			puts("Choice 4: Do nothing to the cars and just test your luck...");
                        scanf("%d", &uChoice);
                        switch(uChoice)
                        {
                            case 1:
                                puts("Okay so this was a pretty good choice, but i can tell you're a purist. Yuck");
                                puts("So now that you chose this i have a task for you, if you can guess the number than you get to move on to the next door, but really you can still move on anyways.");
                                puts("So heres the equation 134 x 4 + 31 x 21 = ?\n Whats the answer? ");
                                scanf("%d", &numguess);
                                if(numguess = 1187)
                                {
                                    puts("Okay i guess you're pretty smart so get out of my room.");
                                }
                                else
                                {
                                    puts("Bro it is literally so easy but that was your last chance, bye");
                                }
                                break;
                            case 2: //this case will eventually take in a string and then maniuplate but not randomly i just said that to make it look cooler
                                puts("Why the heck would you make this choice? Literally this is the best car you can ever drive. Pleb");
                                puts("Since you chose this i have a riddle for you, you walk into a room with 5 people, they all die, how many people are left in the room?");
                                scanf("%d", &numguess);
                                if(numguess = 6)
                                {
                                    puts("Sweet, looks like you have some good abstract thinking skills.");
                                    puts("Okay now you can choose another door, bye!");
                                }
                                else
                                {
                                    puts("Okay so, look at your answer and then think really hard about the riddle.");
                                }
				puts("Bet you thought it was over huh? Nah okay so now i'm going to manipulate a string you enter >:)");
				puts("So now you can just enter a random string and i will randomly do something to it");
				getchar();
				fgets(entString,256, stdin);
				stringStuff(ptr);
                                break;
                            case 3: //this case just creates a file in the same directory lmao, but still go find it
                                puts("Okay this is probably the safest choice you can make, but you are still no fun");
                                puts("So since you are no fun, i am goin to try and make this fun by taking a huge twist on the story line. What i am going to do is create a file you're going to write to but your job is to tell me where the file is");
                                inptr = fopen("here_is_Your_file_lol.txt", "a");
                                puts("Now put in your string please >:)");
                                scanf("%s", &ranstring);
                                printf("Here is the string you entered: %s", ranstring);
                                fprintf(inptr,"%s", ranstring);
                                fclose(inptr);
				puts("Now go find your file!");
                                break;
			    case 4: //this case will just choose a random sub case to execute :) 
				puts("Okay so you decided to have a random function chosen for you, cheeky person.");
				puts("So here's your random function:");
				int r = rando();
				switch(r)
				{
					case 1:
						puts("So this function will fill and sort a random array of integers for you");
						for(i = 0; i < 10; i++)
						{
							randints[i] = (rand() % 10) + 1;
						}
						printf("Here is your unsorted array: %d\n", randints);
						for(i = 0; i < 9; i++)
						{
							for(k = i + 1; k < 10; k++)
							{
								if(randints[i] > randints[k])
								{
									int temp = randints[i];
									randints[i] = randints[k];
									randints[k] = temp;
								}
							}

						}
						break;
					case 2:
						puts("Okay so this random case will roll a die with how ever many sides you want, how ever many times you want, just enter a number please.");
						scanf("%d", numrolls);
						
						puts("You decided to roll %d time/s. Now enter how many sides you want the die to have please.");
						scanf("%d", sides);
						
						for(i = 0; i < numrolls; i++)
						{
							roll = (rand() % sides) + 1;
							printf("You randomly rolled a: %d\n", roll);
						}
						break;	
				}
				break;
                            default:
                                puts("Okay so i gave you like three options and you decided to be a little Rebel. No. Don't. This code would work fine if you did not try messing it up pls k thx.");
                                break;
			}
			break;
                    }
		    break;
		}
                    case 19:
                    {
                        while(choice != 99)
                        {
                            puts("you open the door and find ........");
                            puts("a box full of kittens!!! ..........");
                            puts("what do you do? ...................");
                            puts("1 for taking one kitten............");
                            puts("2 for taking two kittens...........");
                            puts("3 for taking three kittens.........");
                            puts("4 for not taking any kittens.......");
                            puts("99 for leaving the room............");
                            scanf("%d",&choice);
                            switch(choice)
                            {
                                case 1:
                                    puts("You only took one kitten??? How heartless!");
                                    break;
                                case 2:
                                    puts("Ok, not bad. 2 kittens could be worse.");
                                    break;
                                case 3:
                                    puts("Wow, look at you. Big man. You took 3 kittens. How do you plan on taking care of them?");
                                    puts("Look, one of them is already crying. Damn, theres a bottle somewhere here, right?");
                                    puts("1 to pick up the bottle from the table............");
                                    puts("2 to ignore the kitten............................");
                                    puts("99 to leave the room..............................");
                                    scanf("%d",&choice);
                                    switch(choice)
                                    {
                                        case 1:
                                            puts("The kitten stopped crying! Good job!");
                                            choice = 19;
                                            break;
                                        case 2:
                                            puts("You heartless fool! Game over.");
                                            choice = 99;
                                            break;
                                        case 99:
                                            puts("Now leaving room.");
                                           choice = 99;
                                            break;
                                    }
                                    break;
				    case 4:
					  puts("How could you not grab a kitten?? You heartless fool. Game over. ");
				  choice = 99;	
				  break;
                            }


                        }
                        break;
                    }
                    case 20:
                    {
			
				
				#define BOLDBLACK "\033[1m\033[30m"
				#define BOLDGREEN "\033[1m\033[32m"
				#define RED "\x1b[31m"
				#define BLUE "\x1b[34m"
				#define BOLDBLUE "\033[1m\033[34m"
				#define BOLDRED "\033[1m\033[31m"
				//#define SIZE 11

				system("clear");
				puts(BOLDBLACK "\n\t\t\t\t\t\t WELCOME!! WELCOME!! WELCOME!!\n");
				puts("\n\t\t\t\t\t     BIENVENIDO!! BIENVENIDA!! BIENVENIDOS!!\n");
				puts(BOLDBLACK "\n\t\t\t\t\t     Welcome to Karina's Spanish 101 class!\n"  BOLDGREEN " \u263A\n" RESET);
				puts("I have created 3 exams for you to take, so the end of this adventure you should be able to express yourself in spanish.\n");
	
				
				puts("The average of the 3 exams will be taken at the end. If you pass with an 80% then you pass the class otherwise you will retake the class.\n");
				puts(BOLDBLACK"Let the challenge begin! Enjoy! :D"RESET);
				puts("You may quit anytime by selecting option 99, but I recommend you not to quit!");					
			
                        while(choice != 99)
                        {
                            	
				puts(BOLDBLACK"\nHere are your choices. You may work on your way up or challenge me:\n"RESET);
				puts(BOLDBLACK"Level 1 --> press 1"RESET);
				puts(BOLDBLACK"Level 2 --> press 2"RESET);
				puts(BOLDBLACK"Level 3 --> press 3\n"RESET);

				scanf("%d",&choice);
				switch(choice)

				{
					
					case 1: 
					system("clear");
					srand(time(NULL));
					puts(BOLDBLUE"\n**** Welcome to level 1! ****\n"RESET);
				
				int score = 0;
				char input;
				char n[30];
				srand(time(NULL));
				//int arrayA[SIZE];
				//choice = (rand() %10) + 1;
				gets(name);
				puts(BOLDBLACK"\n1. Please choose the correct translation for:"RESET BOLDBLUE" goodmorning"RESET);
				puts(" A. buenas noches\n B. buenos días\n C. buenas tardes\n D. buen días\n");
				printf(BOLDBLACK"Answer:"RESET);
				scanf(" %c", &input);
				if((input=='B') || (input == 'b'))
				{
					score = score+2; 
				}
				
				puts(BOLDBLACK"\n2. Please choose the correct translation for:"RESET BOLDBLUE" my name is"RESET);
				puts(" A. mi nombre es\n B. tu nombre es\n C. mi hombre es\n D. el hombre es\n");
				printf(BOLDBLACK"Answer:"RESET);
				scanf(" %c", &input);
				if((input=='A') || (input == 'a'))
				{
					score = score+2; 
				}

				puts(BOLDBLACK"\n3. Please choose the correct translation for:"RESET BOLDBLUE" what is your name"RESET);
				puts(" A. cómo llamas\n B. cómo tu llamas\n C. cómo te lamas\n D. cómo te llamas\n");
				printf(BOLDBLACK"Answer:\n"RESET);
				scanf(" %c" ,&input);
				if((input=='D') || (input == 'd'))
				{
					score = score+2; 
				}
				
				puts(BOLDBLACK"\n4. Please choose the correct translation for:"RESET BOLDBLUE" Good afternoon"RESET);
				puts(" A. Buenas tarde\n B. Buen tarde\n C. Buenas tardes\n D. Bueno tarde\n");
				printf(BOLDBLACK"Answer:\n"RESET);
				scanf(" %c" ,&input);
				if((input=='C') || (input == 'c'))
				{
					score = score+2; 
				}
				
				puts(BOLDBLACK"\n5. Please choose the correct translation for:"RESET BOLDBLUE" Goodnight"RESET);
				puts(" A. Buenas noches\n B. Buen noches\n C. Buen\n D. noche\n");
				printf(BOLDBLACK"Answer:\n"RESET);
				scanf(" %c" ,&input);
				if((input=='A') || (input == 'a'))
				{
					score = score+2; 
				}
				
				puts("------------------------");

				printf(BOLDBLACK"%s You scored %d out of 10\n"RESET, n, score);
				puts("------------------------");
				
				if (score >= 8)

				puts(BOLDGREEN"\nGood Job!! I'm so proud of you! :')"RESET);

				else

				{
					
					printf(BOLDRED "\nCome on! You are better than this!! -.- \n" RESET);

				}

				break;		
			
				case 2: 

				system("clear");
				int random = rand()%5+1;
				puts(BOLDBLUE"\n**** Welcome to level 2! ****\n");
				
				puts(BOLDBLACK"\n1. Please choose the correct translation for:" BOLDBLUE" Monday");
				//randomize(arrayA);
				//printer(arrayA);
				puts(" A. Viernes\n B. Martes\n C. Lunes\n D. Miércoles\n E. Jueves\n");
				printf(BOLDBLACK"Answer:\n");
				scanf(" %c" ,&input);
				if((input=='C') || (input == 'c'))
				{
					score = score+2; 
					
				}

				puts(BOLDBLACK"\n2. Please choose the correct translation for:" BOLDBLUE" Wednesday");
				puts(" A. Viernes\n B. Martes\n C. Lunes\n D. Miércoles\n E. Jueves\n");
				printf(BOLDBLACK"Answer:\n");
				scanf(" %c" ,&input);
				if((input=='D') || (input == 'd'))
				{
					score = score+2; 
				}
			
				puts(BOLDBLACK"\n3. Please choose the correct translation for:" BOLDBLUE" Sunday");
				puts(" A. Viernes\n B. Domingo\n C. Lunes\n D. Miércoles\n E. Jueves\n");
				printf(BOLDBLACK"Answer:\n");
				scanf(" %c" ,&input);
				if((input=='B') || (input == 'b'))
				{
					score = score+2; 
				}				
				
				{
				puts("------------------------");
				printf(BOLDBLACK"%s You scored %d out of 16\n", n, score);
				puts("------------------------");
				}
				puts(BOLDBLUE"\nHere are the rest of the week days that you should know\n");
				puts("Jueves = Thursday");
				puts("Martes = Tuesday");
				puts("Viernes = Friday");
				puts("Sabado = Saturday");

				if (score >= 14)

				puts(BOLDGREEN"\nKeep going!!Good Job!! I'm so proud of you! :')");

				else

				{
					
					printf(BOLDRED "\nCome on! You are better than this!! -.- \n");

				}

				break;
				case 3:
				

				system("clear");
				puts(BOLDBLUE"\n**** Welcome to level 3! ****\n");
				puts(BOLDBLACK"\n1. Please input the correct translation for:" BOLDBLUE" thank you\n");
				char nu[30];
				char in[10];
				char string[1000];
				
				scanf("%s", in);
				
				
					if(strcmp("gracias", in) == 0)
					
					{
					score = score+2;
					puts(BOLDGREEN"Correct!!\n");
					}
					else
					{
					puts(BOLDRED"wrong!\n");
					
					}
					

				puts(BOLDBLACK"\n2. Please choose the correct translation for:" BOLDBLUE" today?");
				puts(" A. noy\n B. hoy\n C. hoya\n D. hoy es\n");
				printf(BOLDBLACK"Answer:\n");
				scanf(" %c" ,&input);
				if((input=='A') || (input == 'a'))
				{
					score = score+2; 
					
				}				

				puts(BOLDBLACK"\n3. Please choose the correct translation for:" BOLDBLUE" I am mean");
				puts(" A. Yo soy malo(a)\n B. Yo estoy malo(a)\n C. Yo es malo(a)\n D. Yo hay malo(a)\n");
				printf(BOLDBLACK"Answer:\n");
				scanf(" %c" ,&input);
				if((input=='A') || (input == 'a'))
				{
					score = score+2; 
					
				}

			
				
				puts(BOLDBLACK"\n4. Please choose the correct translation for:" BOLDBLUE" How old are you?");
				puts(" A. cuantos anos tienes\n B. Cuantos años tienes\n C. Cuatas años\n D. Cuatas años tengo\n");
				printf(BOLDBLACK"Answer:\n");
				scanf(" %c" ,&input);
				if((input=='B') || (input == 'b'))
				{
					score = score+2; 
					
				}



				{
				puts("------------------------");
				printf(BOLDBLACK"%s You scored %d out of 24\n", n, score);
				puts("------------------------");
				}
				

				if (score >= 20)

				puts(BOLDGREEN"\nGood Job!! I'm so proud of you! :')");

				else

				{
					
					printf(BOLDRED "\nCome on! You are better than this!! -.- \n");



					
					}
				if(score >= 22)
				puts("Congratulations you have passed the class!!!");
				else
				{
				puts("WOW!!! You are a LOSER!!");


			
				}


				
				}
					
				if(choice == 99)
				{
					puts(BOLDRED"\nW H Y\nA R E\nY O U\n  A\nQ U I T T E R?!"RESET);
				
				}


                        }
                        break;
                    }
                    case 21:
                    {
                        while(choice != 99)
                        {
                            puts("you open the door and find the one and only Rob. Game over man.");
                            scanf("%d",&choice);
                        }
                        break;
                    }
                    case 22:
                    {
                        while(choice != 99)
                        {
                            puts("you open the door and find ........");
                            scanf("%d",&choice);
                        }
                        break;
                    }
                    case 23:
                    {
                        while(choice != 99)
                        {
                            puts("you open the door and find ........");
                            scanf("%d",&choice);
                        }
                        break;
                    }
                    case 24:
                    {
                        while(choice != 99)
                        {
                            puts("you open the door and find ........");
                            scanf("%d",&choice);
                        }
                        break;
                    }
                    case 25:
                    {
                        while(choice != 99)
                        {
                            puts("You open the door and close it behind you.");
                            puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
                            puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
                            puts("At this point you have 3 choices:");
                            puts("1. Examine the skeleton.");
                            puts("2. Proceed further ahead in the cave.");
                            puts("3. Enter the door to your right.");
                            scanf("%d",&choice);
                            if(choice == 1)
                            {
                                puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
                                puts("To be continued...");
                                break;
                            }
                            else if(choice == 2)
                            {
                                puts("You find yourself further ahead in the cave.");
                                puts("To be continued....");
                                break;
                            }
                            else if(choice == 3)
                            {
                                puts("You enter the and close the door behind you.");
                                printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                                puts("To be continued....");
                                break;
                            }
                            else
                            {
                                puts("wrong choice");
                            }
                        }
                        break;
                    }
                }
        }
}

int rando(void)
{
	int r = (rand() % 2) + 1;
	return r;
}
void shuffle(int *a, int *b, int SIZE)
{
	int i;
	int hold;
	for(i = 0; i < SIZE; i++)
	{
		hold = *(b + i);
		*(b + i) = *(a + i + 1);
		*(a + i + 1) = hold;
	}
}


void stringStuff(char *ptr)
{
	printf("Here is your string before any manipulation: %s\n", ptr);

	int i;
	for(i = 0; i < 256; i++)	
	{
		if(isupper(*(ptr + i)))
		{
			*(ptr + i) = tolower(*(ptr+i));
		}
		else if(islower(*(ptr+i)))
		{
			*(ptr + i) = toupper(*(ptr + i));
		}
		else
		{
			continue;
		}
		ptr + i;
	}
	printf("Here is your string after i messed with it: %s\n", ptr);
	
}


void combine(int *a, int *b, int *c, int *d, int *all)
{
	int i;
	int j;
	int k;
	int l;
	int m;
	
	for(i = 0; i < 52; i++)
	{
		all[j++] = a[i++];
		all[k++] = b[i++];
		all[l++] = c[i++];
		all[m++] = d[i++];
	}
}

int gambleRandom(void)
{
	int r = (rand() % 14) + 1;
	return r;
}

int room12Spells(int *hp, int enDam)	//spell chanting
{
	char fire[] = "fire";
	char thun[] = "thunder";
	char heal[] = "heal";
	char ref[] = "reflect";
	char spell[9] = "";
	puts("Enter any of the following spells: fire, thunder, heal, or reflect");
	scanf("%s", spell);
	char *ch = spell;
	int i = 0, spellC = 0;
	for (i = 0, spellC = 0; i<4; i++)
	{
		if (*(ch + i) == fire[i])
		{
			spellC++;
		}
		else
		{
			break;
		}
	}
	if (spellC == 4)
	{
		puts("You casted the fire spell succesfully!");
		return 4;	//guarunteed 4 damage
	}
	for (i = 0, spellC = 0; i<4; i++)
	{
		if (*(ch + i) == heal[i])
		{
			spellC++;
		}
		else
		{
			break;
		}
	}
	if (spellC == 4)
	{
		if (*hp + 10>20)
		{
			*hp = 20;
		}
		else
		{
			*hp += 10;
		}
		puts("You casted the heal spell succesfully!");
		return 0;	//heal 10 hp
	}
	for (i = 0, spellC = 0; i<7; i++)
	{
		if (*(ch + i) == thun[i])
		{
			spellC++;
		}
		else
		{
			break;
		}
	}
	if (spellC == 7)
	{

		if (rand() % 2 == 1)
		{		//50% chance of hitting
			puts("You casted the thunder spell succesfully!");
			return 8;
		}
		else
		{
			puts("You casted the thunder spell unsuccesfully!");
			return 0;
		}
	}
	for (i = 0, spellC = 0; i<7; i++)
	{
		if (*(ch + i) == ref[i])
		{
			spellC++;
		}
		else
		{
			break;
		}
	}
	if (spellC == 7)
	{
		puts("You casted the reflect spell succesfully!");
		return enDam;	//reflect enemy damage
	}
	puts("You failed to cast any spell!");
	return 0;		//failed spell
}

int room7DiceRoll(int side)
{
	int roll = (rand() % side) +1;
	return roll;
}

void room7RandomNum(int *ptr, int size)
{
	int i;
	for(i=0;i<5;i++)
	{
		for(i=0;i<size;i++)
		{
			*ptr = (rand()%100)+1;
			ptr++;
		}
	}
}

void room7SortNum(int *ptr, int size)
{
	int i, j;
	int temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(ptr+i)<=*(ptr+j))
			{
				temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
			}
		}
	}
}

void writeAnswers()
{
    int input = 0;
	FILE *wptr;

    wptr = fopen("output.txt", "w");


        puts("Enter the magicNumber: ");
        scanf("%d", &input);

        fprintf(wptr, "%d\n", input);

        puts("Enter the weight Balance: ");
        scanf("%d", &input);

        fprintf(wptr, "%d\n", input);

	fclose(wptr);
}


int checkAnswers(int *ptr)
{
    FILE *rptr;
    int i;
	int ptrInt = 0;
	int correct = 0;

	if((rptr = fopen("output.txt", "r")) == NULL)
	{
		puts("File could not be opened");
	}
	else
    {
        while(!feof(rptr))
		{
            fscanf(rptr, "%d", ptrInt);

            for(i = 0; i < 2; i++)
            {
                if(ptrInt == *ptr)
                {
                    correct++;
                    ptr++;
                }
            }
			//compare reader with ptr

		}
    }
    rewind(rptr);
    fclose(rptr);
    return correct;

}
void printUpper(char *arr, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(islower(arr[i]))
		{
			*(arr+i) = toupper(*(arr+i));
		}
	}
	printf("%s",arr);
}
int RolltheDiceman(void)
{
	int a;
	a = (rand() % 6) + 1;
	return a;
}

void casecheck(void)
{
	char input[] ={'"','T','h','e','y',' ','D','i','d',' ','S','u','r','g','e','r','y',' ','O','n',' ','A',' ','G','R','A','P','E','!','"'};
	int upper=0, lower=0, guessadd,i;
	for(i=0;i<input[i]!='\0';i++)
	{
		if(isupper(input[i]))
		{
			upper++;
		}
		if(islower(input[i]))
		{
			lower++;
		}
		printf("%c",input[i]);
	}
	puts("\nHow many lowercase and uppercase letters are in the string you entered?\n");
	scanf("%d", &guessadd);
	if(guessadd == (upper+lower))
	{
		printf("Correct! There were %d lowercase letters and %d uppercase letters\n", lower, upper);
		puts("You may leave.... Never come back...muahahah");
	}
	else
	{
		printf("Incorrect! There were %d lowercase letters and %d uppercase letters\n", lower, upper);
		puts("I will now freeze you to death!!!!\n");
		puts("----- GAME OVER -----\n");
	}
}

void readfile(void)
{
	char accountuser[30] = {0};
	FILE *wptr;
	FILE *rptr;
	unsigned int account = 0;
	double balance = 0;
	double balanceguess = 0;

	if((rptr = fopen("input.txt", "r")) == NULL)
	{
		puts("File could not be opened" );
		puts("REQUIRES A 'input.txt' file \n");
	}
	else
	{
		puts("If you add Tim's balance with Roman's balance what do you get?\n");
		puts("Displaying all balance accounts.\n");
		fscanf(rptr,"%d%s%lf", &account, accountuser, &balance );
		rewind(rptr);
		while(!feof(rptr))
		{
			fscanf(rptr,"%d%s%lf", &account, accountuser, &balance );
			printf("%d %s %.2f\n", account, accountuser, balance);
		}
	}
	scanf("%lf", &balanceguess);
	if(balanceguess == 62.78)
	{
		puts("Correct! You may leave.... \n");
	}
	else
	{
		puts("I will now throw the knife back at you!!!!\n");
		puts("----- GAME OVER -----\n");
	}
}

void randomfill(void)
{
	srand(time(NULL));
	int i=0,y=0,z=0,swap;
	int firstArray[5] = {0};
	int secondArray[5] = {0};
	
	for(i=0;i<5;i++)
	{
		firstArray[i] = rand() % (200 + 1);
		i++;
	}
	for(i=0;i<5;i++)
	{
		secondArray[i] = rand() % (200 + 1);
		i++;
	}
		
	puts("Before Swap \n");
	for(i=0;i<5;i++)
	{
		printf("firstArray[%d]=%d, secondArray[%d]=%d\n", i, firstArray[i], i, secondArray[i]);
	}
        puts("\n");
	puts("After Swap \n");
	for(y=0;y<5;y++)
	{
		swap = firstArray[y];
                firstArray[y]=secondArray[y];
		secondArray[y] = swap;
		
	}
        for(z=0;z<5;z++)
        {
		printf("firstArray[%d]=%d, secondArray[%d]=%d\n", z, firstArray[z], z, secondArray[z]);
	}
	puts("To be honest, this choice shouldn't even be an option....\n");
	puts("I guess I have no other choice but to kill you.... muahahaha\n");
	puts("----- GAME OVER -----\n");
}



int checkInput(char option[10]){
	
	//return 0 if alphanumeric
	//return 1 if has alpha characters
	//return 2 if has numbers
	for(int i = 0; i < 10; i++){
		if(isalnum(option[i])){
			if(isalpha(option[i])){
				return 0; //alpha character
				break;
			}
			
			if(isdigit(option[i])){
				return 1; // a integer
				break;
				
			}
			
		}else{
			return -1;
			break;
		}
	}
	
	return -1;
}


void gameOver(int winOrlose){
	
	int gamesPlayed = 0;
	int totalDeaths = 0;
	int totalWins = 0;
	
	FILE *rptr;
	FILE *wptr;

	
	wptr = fopen("stats.txt","a");
	

	if((rptr = fopen("stats.txt","r")) == NULL)
	{
		puts("File could not be opened");
	}
	else{
		
		while(!feof(rptr)){
			//int ok,ok1,ok2;
			fscanf(rptr,"%d %d %d",&gamesPlayed,&totalWins,&totalDeaths);
			
			gamesPlayed++;
			
			if(winOrlose == 1){
				//win
				totalWins++;
			}else if(winOrlose == 0){
				//loss
				totalDeaths++;
			}
		
			wptr = fopen("stats.txt","w");
			fprintf(wptr,"%d %d %d",gamesPlayed,totalWins,totalDeaths);
			
			fclose(rptr);
			fclose(wptr);
			
			exit(0);
		}
	}
}

int getFileInfo(int num){
	
	int gamesPlayed = 0;
	int totalDeaths = 0;
	int totalWins = 0;
	
	FILE *rptr;
	
	if((rptr = fopen("stats.txt","r")) == NULL)
	{
		fopen("stats.txt","w");
	}
	else{
		while(!feof(rptr)){
			
			fscanf(rptr,"%d %d %d",&gamesPlayed,&totalWins,&totalDeaths);
			
			//printf("%d %d %d\n",gamesPlayed,totalDeaths,longestTime);
			//fprintf(wptr," %d %d %d\n",gamesPlayed,totalDeaths,longestTime);
			
			if(num == 1){
				return(gamesPlayed);
			}else if(num == 2){
				return(totalWins);
			}else{
				return(totalDeaths);
			}
			
			fclose(rptr);
			
			break;
		}
	}
	
	return 0;
}


int randomize(int *num, int SIZE)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        *num = (rand()%10)+1;
        num++;
    }
    return -1;
}
char uppercase(char *str)
{
    int c = 0;
    char ch;
    
    while (str[c] != '\0')
    {
        ch = str[c];
        if (ch >= 'a' && ch <= 'z'){
            str[c] = str[c] - 32;
    }
        c++;
}
    
    return printf("%s", str);
}

void warning(int count)
{
    #define RED(string)     "\x1b[31m" string "\x1b[0m"

    for(count = 0;count<1000;count++)
    {
        if(count!=99)
        {
            printf(""RED("WARNING! TIME SYSTEM MALFUNCTION!")"");
        }
        
    }
}

void TypeWriter(char *arr){
    int len = strlen(arr);
    int i;
    for(i = 0; i < len; i++) {
        putchar(arr[i]);
        usleep(30000);  /* sleep for 35 milliSeconds */
		fflush(stdout);
    }
}

