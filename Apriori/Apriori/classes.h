




class ItemsetHolder
{
public:
	//DynamicArray itemsets;
	
	void buildItemsets();
	void pruneItemsets();

};

class Itemset:public ItemsetHolder
{
public:
	//LinkedList items;
	void determineSupport();

private:

	int support;

};