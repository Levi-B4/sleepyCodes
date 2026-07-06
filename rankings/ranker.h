#ifndef RANKER_H
#define RANKER_H


class Ranker{
	public:
		Ranker();
		bool isRankedUp();
		void read();

	private:
		bool isRankedUp = false;
		int rankOnLoad = 0;
		int elo = 5;
};


#endif //RANKER_H
